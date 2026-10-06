/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0069b238; end: 0069b2cf;  */

void FUN_0069b238(long param_1)

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



/* Entry: 0069b2d0; end: 0069b80b;  */

long ***** FUN_0069b2d0(long *****param_1,long *****param_2)

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
  
  if (param_1 == param_2) {
    ppppplVar13 = param_1;
    ppppplVar7 = param_2;
    func_0x0069be68(param_1,param_2,&UNK_00914cad);
    FUN_00554814();
    func_0x00533528();
    ppppplVar5 = (long *****)&UNK_00914cb9;
    FUN_00776794(&pppplStack_80,&UNK_00914cb9,0x33,ppppplVar13,ppppplVar7);
  }
  else {
    ppppplVar13 = param_1;
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
      ppppplVar13 = param_1;
      FUN_006994c8();
      ppppplVar17 = (long *****)param_1[0xb];
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
            func_0x006895cc(param_1,param_2);
            ppppplVar5 = param_1;
            func_0x0069bf18();
            FUN_006a4a80(param_1,ppppplVar5);
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
            if (unaff_x21 == param_1) {
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
              if (unaff_x21 == param_1) {
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
    param_1 = &pppplStack_80;
    FUN_00537a3c(param_1,&UNK_00914d14);
    FUN_00554ab4();
    func_0x0069bef4(pppplStack_68[1]);
    ppppplVar5 = param_1;
    FUN_00554ab4(param_1,&UNK_00914d48,4);
    func_0x0069bec4();
    func_0x0069bef4(ppppplVar5[1]);
    ppppplVar5 = (long *****)&UNK_00910052;
    FUN_00537a9c(param_1);
  }
  ppppplVar13 = &pppplStack_80;
  FUN_005558a0();
  pcStack_c8 = FUN_0069b80c;
  pppplStack_e0 = (long ****)param_1;
  pppplStack_d8 = (long ****)param_2;
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



/* Entry: 0069b80c; end: 0069b8b3;  */

long ** FUN_0069b80c(long param_1,long **param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  long ****pppplVar10;
  long *****ppppplVar11;
  undefined8 extraout_x8;
  long unaff_x21;
  long lVar12;
  long *****ppppplVar13;
  uint uVar14;
  long **pplVar15;
  long *plVar16;
  undefined1 auStack_200 [24];
  long *plStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  long ****pppplStack_170;
  long ****pppplStack_168;
  long ****pppplStack_160;
  long ***ppplStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  long ***appplStack_108 [8];
  long ***appplStack_c8 [2];
  undefined8 uStack_b8;
  long ***appplStack_48 [2];
  undefined1 auStack_38 [24];
  
  FUN_00699298();
  if (param_2 != (long **)0x0) {
    return param_2;
  }
  func_0x0069bec4();
  if (param_1 == 0) {
    FUN_00425cb4(auStack_38,&UNK_00914d4d);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_38,*(undefined8 *)(param_1 + 8));
  }
  ppppplVar11 = (long *****)((long)&segment_command_00000020.cmdsize + 2);
  FUN_0077670c(appplStack_48,&UNK_00914cb9,0x26);
  FUN_0054ff4c(appplStack_48,&UNK_00914d55);
  FUN_00555478();
  pppplVar10 = (long ****)&UNK_00914d80;
  func_0x0065ae70();
  ppppplVar5 = (long *****)appplStack_48;
  FUN_005558a0();
  func_0x0069bee4();
  func_0x0069be84();
  ppppplVar7 = &pppplStack_170;
  func_0x0069bea0();
  uStack_b8 = extraout_x8;
  FUN_00699298();
  func_0x0069bf38();
  uVar14 = *(uint *)(unaff_x21 + 4);
  for (lVar12 = 0; (ulong)(uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar12 != 0;
      lVar12 = lVar12 + 0x58) {
    ppppplVar11 = (long *****)(*(long *)(unaff_x21 + 0x38) + lVar12);
    uVar2 = *(int *)(ppppplVar11[9] + 6) == 3;
    if ((bool)uVar2) {
      func_0x0069be68();
      FUN_0068ae9c();
      if ((int)ppppplVar5 == 0) {
        pplVar15 = (long **)0x0;
        goto LAB_0069bad4;
      }
    }
  }
  pppplStack_170 = (long ****)0x0;
  pppplStack_168 = (long ****)0x0;
  pppplStack_160 = (long ****)0x0;
  if (*(char *)(*(long *)(unaff_x21 + 0x20) + 0x53) == '\x01') {
    lVar12 = *(long *)(unaff_x21 + 0x38);
    ppppplVar5 = &pppplStack_160;
    pppplVar10 = (long ****)((long)&MACH_HEADER.magic + 1);
    FUN_00666d44();
    pppplStack_160 = (long ****)(ppppplVar5 + (long)pppplVar10);
    pppplStack_168 = (long ****)(ppppplVar5 + 1);
    *ppppplVar5 = (long ****)(lVar12 + 0x58);
    ppppplVar7 = ppppplVar11;
    ppppplVar9 = ppppplVar5;
    pppplStack_170 = (long ****)ppppplVar5;
    ppppplVar8 = (long *****)pppplStack_168;
  }
  else {
    func_0x0069be68();
    FUN_0068b260();
    ppppplVar9 = (long *****)pppplStack_170;
    ppppplVar8 = (long *****)pppplStack_168;
  }
  while( true ) {
    pplVar15 = (long **)(ulong)(ppppplVar9 == ppppplVar8);
    uVar2 = 1;
    ppppplVar11 = ppppplVar7;
    if (ppppplVar9 == ppppplVar8) break;
    ppppplVar13 = (long *****)*ppppplVar9;
    ppppplVar5 = ppppplVar13;
    FUN_00656c60();
    uVar2 = (int)ppppplVar5 == 10;
    if ((bool)uVar2) {
      ppppplVar6 = ppppplVar13;
      func_0x006595dc();
      if ((int)ppppplVar6 == 0) {
LAB_0069ba00:
        ppppplVar5 = ppppplVar6;
        if ((*(byte *)((long)ppppplVar13 + 1) >> 5 & 1) == 0) {
          func_0x0069be68();
          func_0x0069bf30();
          FUN_00549a28();
          ppppplVar7 = ppppplVar13;
          ppppplVar11 = ppppplVar13;
          if (((ulong)ppppplVar5 & 1) == 0) break;
        }
        else {
          func_0x0069be68();
          ppppplVar11 = ppppplVar13;
          FUN_0068af64();
          uVar14 = 0;
          uVar4 = (uint)ppppplVar5;
          while (uVar2 = (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) == uVar14,
                ppppplVar7 = ppppplVar11, !(bool)uVar2) {
            func_0x0069be68();
            ppppplVar11 = ppppplVar13;
            func_0x0068e124();
            FUN_00549a28();
            uVar14 = uVar14 + 1;
            if (((ulong)ppppplVar5 & 1) == 0) goto LAB_0069bacc;
          }
        }
      }
      else {
        ppppplVar5 = ppppplVar13;
        FUN_00656024();
        ppppplVar5 = (long *****)(ppppplVar5[7] + 0xb);
        FUN_00656c60();
        uVar3 = (int)ppppplVar5 == 10;
        if ((bool)uVar3) {
          func_0x0069be68();
          ppppplVar11 = ppppplVar13;
          func_0x0068efe0();
          if (((ulong)ppppplVar5[1] & 1) != 0) {
            ppppplVar6 = ppppplVar5;
            func_0x0069be74();
            uVar2 = 1;
            if ((bool)uVar3) goto LAB_0069ba00;
          }
          func_0x0069bf24(appplStack_108);
          func_0x0069bf24(&ppplStack_158);
          pppplVar10 = appplStack_108;
          FUN_00696774(ppppplVar5,pppplVar10);
          ppplStack_158 = (long ***)0x0;
          uStack_150 = 0;
          uStack_148 = 0;
          while (uVar2 = appplStack_108[0] == ppplStack_158, !(bool)uVar2) {
            ppppplVar5 = (long *****)appplStack_c8;
            FUN_0069721c();
            FUN_00549a28();
            if (((ulong)ppppplVar5 & 1) == 0) {
              func_0x0069bf10();
              func_0x0069bf08();
LAB_0069bacc:
              pplVar15 = (long **)0x0;
              goto LAB_0069bad0;
            }
            ppppplVar5 = (long *****)appplStack_108;
            FUN_0068fbf0();
          }
          func_0x0069bf10();
          func_0x0069bf08();
          ppppplVar7 = ppppplVar11;
        }
      }
    }
    ppppplVar9 = ppppplVar9 + 1;
  }
LAB_0069bad0:
  func_0x0069becc();
LAB_0069bad4:
  func_0x0069be8c(uStack_b8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0069becc();
    func_0x0069be84();
    ppppplVar7 = ppppplVar5;
    FUN_00699298();
    ppppplVar8 = ppppplVar5;
    FUN_0069b80c();
    uVar14 = *(uint *)((long)ppppplVar7 + 4);
    for (lVar12 = 0; (ulong)(uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar12 != 0;
        lVar12 = lVar12 + 0x58) {
      if ((*(int *)(*(long *)((long)ppppplVar7[7] + lVar12 + 0x48) + 0x30) == 3) &&
         (ppppplVar9 = ppppplVar8, FUN_0068ae9c(ppppplVar8,ppppplVar5), ((ulong)ppppplVar9 & 1) == 0
         )) {
        FUN_00682f98(&plStack_1e8,pppplVar10,*(undefined8 *)((long)ppppplVar7[7] + lVar12 + 8));
        func_0x0045a4f0(ppppplVar11,&plStack_1e8);
        func_0x0069bee4();
      }
    }
    plStack_1e8 = (long *)0x0;
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = 0;
    FUN_0068b260(ppppplVar8,ppppplVar5,&plStack_1e8);
    plVar1 = plStack_1e0;
    for (plVar16 = plStack_1e8; plVar16 != plVar1; plVar16 = plVar16 + 1) {
      lVar12 = *plVar16;
      func_0x0069bf00();
      if ((int)ppppplVar8 == 10) {
        if ((*(byte *)(lVar12 + 1) >> 5 & 1) == 0) {
          func_0x0069bed4();
          func_0x0069bf30();
          FUN_0069bd3c(auStack_200,pppplVar10,lVar12,0xffffffff);
          FUN_0069bb4c(ppppplVar8,auStack_200,ppppplVar11);
          func_0x0069bebc();
        }
        else {
          func_0x0069bed4();
          FUN_0068af64();
          uVar4 = (uint)ppppplVar8;
          for (uVar14 = 0; (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar14;
              uVar14 = uVar14 + 1) {
            func_0x0069bed4();
            func_0x0068e124();
            FUN_0069bd3c(auStack_200,pppplVar10,lVar12,uVar14);
            FUN_0069bb4c(ppppplVar8,auStack_200,ppppplVar11);
            func_0x0069bebc();
          }
        }
      }
    }
    pplVar15 = &plStack_1e8;
    FUN_00666dd0(pplVar15);
    return pplVar15;
  }
  return pplVar15;
}



/* Entry: 0069b8b4; end: 0069bb4b;  */

long ** FUN_0069b8b4(long *****param_1,long ****param_2,long *****param_3)

{
  long *plVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  undefined8 extraout_x8;
  long unaff_x21;
  long lVar9;
  long *****ppppplVar10;
  uint uVar11;
  long **pplVar12;
  long *plVar13;
  undefined1 auStack_1b0 [24];
  long *plStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  long ****pppplStack_120;
  long ****pppplStack_118;
  long ****pppplStack_110;
  long ***ppplStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  long ***appplStack_b8 [8];
  long ***appplStack_78 [2];
  undefined8 uStack_68;
  
  ppppplVar6 = &pppplStack_120;
  func_0x0069bea0();
  uStack_68 = extraout_x8;
  FUN_00699298();
  func_0x0069bf38();
  uVar11 = *(uint *)(unaff_x21 + 4);
  for (lVar9 = 0; (ulong)(uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar9 != 0;
      lVar9 = lVar9 + 0x58) {
    param_3 = (long *****)(*(long *)(unaff_x21 + 0x38) + lVar9);
    uVar2 = *(int *)(param_3[9] + 6) == 3;
    if ((bool)uVar2) {
      func_0x0069be68();
      FUN_0068ae9c();
      if ((int)param_1 == 0) {
        pplVar12 = (long **)0x0;
        goto LAB_0069bad4;
      }
    }
  }
  pppplStack_120 = (long ****)0x0;
  pppplStack_118 = (long ****)0x0;
  pppplStack_110 = (long ****)0x0;
  if (*(char *)(*(long *)(unaff_x21 + 0x20) + 0x53) == '\x01') {
    lVar9 = *(long *)(unaff_x21 + 0x38);
    param_1 = &pppplStack_110;
    param_2 = (long ****)((long)&MACH_HEADER.magic + 1);
    FUN_00666d44();
    pppplStack_110 = (long ****)(param_1 + (long)param_2);
    pppplStack_118 = (long ****)(param_1 + 1);
    *param_1 = (long ****)(lVar9 + 0x58);
    ppppplVar6 = param_3;
    ppppplVar8 = param_1;
    pppplStack_120 = (long ****)param_1;
    ppppplVar7 = (long *****)pppplStack_118;
  }
  else {
    func_0x0069be68();
    FUN_0068b260();
    ppppplVar8 = (long *****)pppplStack_120;
    ppppplVar7 = (long *****)pppplStack_118;
  }
  while( true ) {
    pplVar12 = (long **)(ulong)(ppppplVar8 == ppppplVar7);
    uVar2 = 1;
    param_3 = ppppplVar6;
    if (ppppplVar8 == ppppplVar7) break;
    ppppplVar10 = (long *****)*ppppplVar8;
    param_1 = ppppplVar10;
    FUN_00656c60();
    uVar2 = (int)param_1 == 10;
    if ((bool)uVar2) {
      ppppplVar5 = ppppplVar10;
      func_0x006595dc();
      if ((int)ppppplVar5 == 0) {
LAB_0069ba00:
        param_1 = ppppplVar5;
        if ((*(byte *)((long)ppppplVar10 + 1) >> 5 & 1) == 0) {
          func_0x0069be68();
          func_0x0069bf30();
          FUN_00549a28();
          ppppplVar6 = ppppplVar10;
          param_3 = ppppplVar10;
          if (((ulong)param_1 & 1) == 0) break;
        }
        else {
          func_0x0069be68();
          param_3 = ppppplVar10;
          FUN_0068af64();
          uVar11 = 0;
          uVar4 = (uint)param_1;
          while (uVar2 = (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) == uVar11,
                ppppplVar6 = param_3, !(bool)uVar2) {
            func_0x0069be68();
            param_3 = ppppplVar10;
            func_0x0068e124();
            FUN_00549a28();
            uVar11 = uVar11 + 1;
            if (((ulong)param_1 & 1) == 0) goto LAB_0069bacc;
          }
        }
      }
      else {
        ppppplVar5 = ppppplVar10;
        FUN_00656024();
        param_1 = (long *****)(ppppplVar5[7] + 0xb);
        FUN_00656c60();
        uVar3 = (int)param_1 == 10;
        if ((bool)uVar3) {
          func_0x0069be68();
          param_3 = ppppplVar10;
          func_0x0068efe0();
          if (((ulong)param_1[1] & 1) != 0) {
            ppppplVar5 = param_1;
            func_0x0069be74();
            uVar2 = 1;
            if ((bool)uVar3) goto LAB_0069ba00;
          }
          func_0x0069bf24(appplStack_b8);
          func_0x0069bf24(&ppplStack_108);
          param_2 = appplStack_b8;
          FUN_00696774(param_1,param_2);
          ppplStack_108 = (long ***)0x0;
          uStack_100 = 0;
          uStack_f8 = 0;
          while (uVar2 = appplStack_b8[0] == ppplStack_108, !(bool)uVar2) {
            param_1 = (long *****)appplStack_78;
            FUN_0069721c();
            FUN_00549a28();
            if (((ulong)param_1 & 1) == 0) {
              func_0x0069bf10();
              func_0x0069bf08();
LAB_0069bacc:
              pplVar12 = (long **)0x0;
              goto LAB_0069bad0;
            }
            param_1 = (long *****)appplStack_b8;
            FUN_0068fbf0();
          }
          func_0x0069bf10();
          func_0x0069bf08();
          ppppplVar6 = param_3;
        }
      }
    }
    ppppplVar8 = ppppplVar8 + 1;
  }
LAB_0069bad0:
  func_0x0069becc();
LAB_0069bad4:
  func_0x0069be8c(uStack_68);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0069becc();
    func_0x0069be84();
    ppppplVar6 = param_1;
    FUN_00699298();
    ppppplVar7 = param_1;
    FUN_0069b80c();
    uVar11 = *(uint *)((long)ppppplVar6 + 4);
    for (lVar9 = 0; (ulong)(uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar9 != 0;
        lVar9 = lVar9 + 0x58) {
      if ((*(int *)(*(long *)((long)ppppplVar6[7] + lVar9 + 0x48) + 0x30) == 3) &&
         (ppppplVar8 = ppppplVar7, FUN_0068ae9c(ppppplVar7,param_1), ((ulong)ppppplVar8 & 1) == 0))
      {
        FUN_00682f98(&plStack_198,param_2,*(undefined8 *)((long)ppppplVar6[7] + lVar9 + 8));
        func_0x0045a4f0(param_3,&plStack_198);
        func_0x0069bee4();
      }
    }
    plStack_198 = (long *)0x0;
    plStack_190 = (long *)0x0;
    uStack_188 = 0;
    FUN_0068b260(ppppplVar7,param_1,&plStack_198);
    plVar1 = plStack_190;
    for (plVar13 = plStack_198; plVar13 != plVar1; plVar13 = plVar13 + 1) {
      lVar9 = *plVar13;
      func_0x0069bf00();
      if ((int)ppppplVar7 == 10) {
        if ((*(byte *)(lVar9 + 1) >> 5 & 1) == 0) {
          func_0x0069bed4();
          func_0x0069bf30();
          FUN_0069bd3c(auStack_1b0,param_2,lVar9,0xffffffff);
          FUN_0069bb4c(ppppplVar7,auStack_1b0,param_3);
          func_0x0069bebc();
        }
        else {
          func_0x0069bed4();
          FUN_0068af64();
          uVar4 = (uint)ppppplVar7;
          for (uVar11 = 0; (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar11;
              uVar11 = uVar11 + 1) {
            func_0x0069bed4();
            func_0x0068e124();
            FUN_0069bd3c(auStack_1b0,param_2,lVar9,uVar11);
            FUN_0069bb4c(ppppplVar7,auStack_1b0,param_3);
            func_0x0069bebc();
          }
        }
      }
    }
    pplVar12 = &plStack_198;
    FUN_00666dd0(pplVar12);
    return pplVar12;
  }
  return pplVar12;
}



/* Entry: 0069bb4c; end: 0069bd3b;  */

void FUN_0069bb4c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined1 auStack_90 [24];
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  uVar3 = param_1;
  FUN_00699298();
  uVar4 = param_1;
  FUN_0069b80c();
  uVar6 = *(uint *)(uVar3 + 4);
  for (lVar7 = 0; (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar7 != 0;
      lVar7 = lVar7 + 0x58) {
    if ((*(int *)(*(long *)(*(long *)(uVar3 + 0x38) + lVar7 + 0x48) + 0x30) == 3) &&
       (uVar5 = uVar4, FUN_0068ae9c(uVar4,param_1), (uVar5 & 1) == 0)) {
      FUN_00682f98(&plStack_78,param_2,*(undefined8 *)(*(long *)(uVar3 + 0x38) + lVar7 + 8));
      func_0x0045a4f0(param_3,&plStack_78);
      func_0x0069bee4();
    }
  }
  plStack_78 = (long *)0x0;
  plStack_70 = (long *)0x0;
  uStack_68 = 0;
  FUN_0068b260(uVar4,param_1,&plStack_78);
  plVar1 = plStack_70;
  for (plVar8 = plStack_78; plVar8 != plVar1; plVar8 = plVar8 + 1) {
    lVar7 = *plVar8;
    func_0x0069bf00();
    if ((int)uVar4 == 10) {
      if ((*(byte *)(lVar7 + 1) >> 5 & 1) == 0) {
        func_0x0069bed4();
        func_0x0069bf30();
        FUN_0069bd3c(auStack_90,param_2,lVar7,0xffffffff);
        FUN_0069bb4c(uVar4,auStack_90,param_3);
        func_0x0069bebc();
      }
      else {
        func_0x0069bed4();
        FUN_0068af64();
        uVar2 = (uint)uVar4;
        for (uVar6 = 0; (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) != uVar6; uVar6 = uVar6 + 1) {
          func_0x0069bed4();
          func_0x0068e124();
          FUN_0069bd3c(auStack_90,param_2,lVar7,uVar6);
          FUN_0069bb4c(uVar4,auStack_90,param_3);
          func_0x0069bebc();
        }
      }
    }
  }
  FUN_00666dd0(&plStack_78);
  return;
}



/* Entry: 0069bd3c; end: 0069be33;  */

undefined1  [16]
FUN_0069bd3c(undefined1 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined8 extraout_x8;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [48];
  undefined8 uStack_38;
  
  func_0x0069bea0();
  uStack_38 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  if ((*(byte *)(param_3 + 1) >> 3 & 1) == 0) {
    func_0x0069beec();
  }
  else {
    func_0x0069beb4();
    func_0x0069beec();
    func_0x0069beb4();
  }
  uVar1 = (int)param_4 == -1;
  if (!(bool)uVar1) {
    func_0x0069beb4();
    func_0x0066741c(auStack_68,param_4);
    param_1 = auStack_68;
    FUN_0055d0c8(auStack_80,param_1);
    func_0x0069beec();
    func_0x0069bebc();
    func_0x0069beb4();
  }
  pcVar2 = ".";
  func_0x0069beb4();
  func_0x0069be8c(uStack_38);
  if ((bool)uVar1) {
    auVar3._8_8_ = pcVar2;
    auVar3._0_8_ = param_1;
    return auVar3;
  }
  ___stack_chk_fail();
  func_0x0069bebc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  __Unwind_Resume(param_1);
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = param_3;
  return auVar4;
}



/* Entry: 0069be34; end: 0069bf43;  */

void FUN_0069be34(void)

{
  return;
}



/* Entry: 0069bf44; end: 0069bf9b;  */

void FUN_0069bf44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0048d000(param_3);
  func_0x006a4194();
  FUN_0069caf8();
  return;
}



/* Entry: 0069bf9c; end: 0069c067;  */

void FUN_0069bf9c(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined **ppuVar2;
  undefined1 auStack_a0 [4];
  undefined1 uStack_9c;
  undefined1 uStack_99;
  int iStack_94;
  undefined1 uStack_8e;
  
  ppuVar2 = &PTR___tlv_bootstrap_00b2c4e0;
  (*(code *)PTR___tlv_bootstrap_00b2c4e0)();
  iVar1 = *(int *)ppuVar2;
  if (iVar1 < 1) {
    *(undefined4 *)ppuVar2 = 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_0069ca70(auStack_a0);
  uStack_9c = 1;
  uStack_8e = 1;
  uStack_99 = uRam0000000000b6c8a0;
  if (iStack_94 < 0xd) {
    iStack_94 = 0xd;
  }
  FUN_0069bf44(auStack_a0,param_2,param_1);
  FUN_0069c068(param_1);
  func_0x006a44bc();
  *(int *)ppuVar2 = iVar1;
  return;
}



/* Entry: 0069c068; end: 0069c09f;  */

void FUN_0069c068(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = (long)*(char *)((long)param_1 + 0x17);
  if (lVar1 < 0) {
    lVar1 = param_1[1];
    if (lVar1 == 0) {
      return;
    }
    puVar2 = (undefined8 *)*param_1;
  }
  else {
    puVar2 = param_1;
    if (*(char *)((long)param_1 + 0x17) == '\0') {
      return;
    }
  }
  if (*(char *)((long)puVar2 + lVar1 + -1) != ' ') {
    return;
  }
  if ((long)*(char *)((long)param_1 + 0x17) < 0) {
    lVar1 = param_1[1] + -1;
    param_1[1] = lVar1;
    param_1 = (undefined8 *)*param_1;
  }
  else {
    lVar1 = (long)*(char *)((long)param_1 + 0x17) + -1;
    *(byte *)((long)param_1 + 0x17) = (byte)lVar1 & 0x7f;
  }
  *(undefined1 *)((long)param_1 + lVar1) = 0;
  return;
}



/* Entry: 0069c0a0; end: 0069c10b;  */

void FUN_0069c0a0(long param_1,int param_2)

{
  undefined *puVar1;
  dword *pdVar2;
  long *plVar3;
  
  pdVar2 = &MACH_HEADER.cpusubtype;
  __Znwm();
  puVar1 = &UNK_00a0fde8;
  if (param_2 == 0) {
    puVar1 = &UNK_00a0feb0;
  }
  *(undefined **)pdVar2 = puVar1 + 0x10;
  plVar3 = *(long **)(param_1 + 0x20);
  *(dword **)(param_1 + 0x20) = pdVar2;
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0069c0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))();
    return;
  }
  return;
}



/* Entry: 0069c10c; end: 0069c12b;  */

long * FUN_0069c10c(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined8 extraout_x8;
  long *plVar5;
  long unaff_x20;
  long *unaff_x21;
  long lStack_160;
  undefined4 uStack_158;
  long lStack_150;
  long *plStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  long lStack_120;
  undefined8 uStack_48;
  
  plVar2 = *(long **)(*(long *)(param_2 + 0x10) + 0x18);
  func_0x006743c8();
  uStack_48 = extraout_x8;
  uVar4 = param_3;
  if (*(int *)(param_2 + 0x88) == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    func_0x00675410();
    if (*plVar2 != 0) {
      lStack_120 = *plVar2;
      FUN_00567614();
      plVar1 = (long *)unaff_x21[5];
      func_0x00675854();
      plVar2 = plVar1;
      func_0x00675f98();
      if (plVar1 != (long *)0x0) goto LAB_00655da4;
    }
    func_0x006757e0();
    param_2 = *unaff_x21;
    func_0x00675b2c();
    if (unaff_x21[1] != 0) {
      func_0x00675ec0(unaff_x21[5]);
      func_0x00675fb8(unaff_x21[5]);
    }
    plVar2 = (long *)unaff_x21[5];
    func_0x00675854();
    if ((plVar2 == (long *)0x0) &&
       ((plVar2 = (long *)unaff_x21[3], plVar2 == (long *)0x0 ||
        (uVar4 = param_3, FUN_00655ca0(), param_2 = unaff_x20, plVar2 == (long *)0x0)))) {
      func_0x006753c8();
      uVar4 = param_3;
      FUN_00655e48();
      if ((int)plVar2 == 0) {
        plVar5 = (long *)0x0;
      }
      else {
        plVar2 = (long *)unaff_x21[5];
        func_0x00675854();
        plVar5 = plVar2;
      }
      plVar1 = (long *)0x0;
      unaff_x20 = 1;
    }
    else {
      unaff_x20 = 0;
      plVar5 = plVar2;
      plVar1 = plVar2;
    }
    func_0x00675210();
    if ((int)unaff_x20 != 0) {
      func_0x00675f90();
      in_ZR = (int)plVar2 == 0;
      plVar1 = plVar5;
      if ((bool)in_ZR) {
        plVar1 = (long *)0x0;
      }
    }
    func_0x00675428();
  }
LAB_00655da4:
  func_0x00674120(uStack_48);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  plVar5 = plVar2;
  func_0x00675428();
  func_0x00674bc8();
  plVar3 = &lStack_160;
  pcStack_138 = FUN_00655dec;
  plVar1 = plVar5 + 0x21;
  lStack_160 = param_2;
  uStack_158 = uVar4;
  lStack_150 = unaff_x20;
  plStack_148 = plVar2;
  puStack_140 = &stack0xfffffffffffffff0;
  FUN_00666b20();
  if ((long *)plVar5[0x22] == plVar1 && (uint)plVar3 == (uint)*(byte *)(plVar5[0x22] + 10)) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)plVar1[((ulong)plVar3 & 0xff) * 3 + 4];
  }
  return plVar2;
}



/* Entry: 0069c12c; end: 0069c1af;  */

undefined8 FUN_0069c12c(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = param_2;
  FUN_004636dc(param_2,&UNK_00810ba1);
  if (((uVar5 & 1) == 0) &&
     (FUN_004636dc(param_2,&UNK_00810bb6), uVar5 = param_2, (int)param_2 == 0)) {
    return 0;
  }
  func_0x006a44ac();
  lVar6 = *(long *)(*(long *)(uVar5 + 0x10) + 0x18);
  bVar1 = *(byte *)((long)param_3 + 0x17);
  uVar3 = bVar1 == 0;
  uVar5 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)bVar1) {
    uVar5 = (ulong)bVar1;
    puVar2 = param_3;
  }
  func_0x00675224(lVar6,puVar2,uVar5);
  uVar4 = *(undefined8 *)(lVar6 + 0x28);
  FUN_0065449c(uVar4);
  func_0x00675120();
  if (!(bool)uVar3) {
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 0069c1b0; end: 0069c1b7;  */

undefined8 FUN_0069c1b0(void)

{
  return 0;
}



/* Entry: 0069c1b8; end: 0069c283;  */

undefined8 * FUN_0069c1b8(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  undefined1 auStack_140 [256];
  
  (**(code **)(*param_3 + 0x18))(param_3);
  bVar1 = *(byte *)((long)param_1 + 0x1f);
  FUN_00699298(param_3);
  FUN_0069e8f8(auStack_140,param_3,param_2,*param_1,param_1[1],param_1[2],bVar1 ^ 1,
               *(undefined1 *)((long)param_1 + 0x19),*(undefined4 *)((long)param_1 + 0x1a),
               *(undefined1 *)((long)param_1 + 0x1e),*(undefined4 *)(param_1 + 4));
  FUN_0069c284(param_1);
  func_0x006a459c();
  return param_1;
}



/* Entry: 0069c284; end: 0069c3b7;  */

void FUN_0069c284(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  undefined8 extraout_x11;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_38;
  
  uVar6 = param_1;
  uVar10 = param_3;
  uVar11 = param_4;
  func_0x006a3d70();
  uStack_38 = extraout_x8;
  do {
    iVar2 = *(int *)(param_4 + 0x28);
    cVar3 = SBORROW4(iVar2,1);
    cVar4 = iVar2 + -1 < 0;
    uVar5 = iVar2 == 1;
    if ((bool)uVar5) {
      if ((((*(byte *)(param_4 + 0xf5) & 1) == 0) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) &&
         (uVar6 = param_3, FUN_00549a28(), (uVar6 & 1) == 0)) {
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        puVar8 = &uStack_b0;
        FUN_0069924c(param_3);
        puVar7 = &UNK_00914d85;
        FUN_00532c74();
        puStack_68 = puVar7;
        puStack_60 = puVar8;
        func_0x006a40a0();
        FUN_0066855c(&uStack_b0);
        func_0x006a3cc8();
        uStack_98 = extraout_x10;
        if (cVar4 == cVar3) {
          uStack_98 = param_3;
        }
        func_0x006a42fc();
        func_0x006a3fcc();
        uVar1 = extraout_x11;
        uVar11 = extraout_x10_00;
        if (cVar4 == cVar3) {
          uVar1 = extraout_x8_00;
          uVar11 = param_3;
        }
        param_2 = 0xffffffff;
        uVar10 = 0;
        FUN_0069c574(param_4,0xffffffff,0,uVar11,uVar1);
        func_0x006a40f8();
        func_0x006a3f40();
        func_0x00459128(&uStack_b0);
      }
      break;
    }
    func_0x006a411c();
    FUN_0069eba4();
  } while ((uVar6 & 1) != 0);
  func_0x006a3c9c(uStack_38);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x006a40f8();
  func_0x006a3f40();
  puVar8 = &uStack_b0;
  func_0x00459128();
  func_0x006a3f28();
  puVar9 = &uStack_120;
  uStack_120 = param_2;
  uStack_118 = uVar10;
  FUN_0069c42c(puVar9,*puVar8);
  if ((int)puVar9 != 0) {
    ppuStack_140 = &PTR_FUN_00a01280;
    uStack_130 = (undefined4)uVar10;
    uStack_128 = 0;
    uStack_138 = param_2;
    uStack_12c = uStack_130;
    FUN_0069c1b8(puVar8,&ppuStack_140,uVar11);
  }
  return;
}



/* Entry: 0069c3b8; end: 0069c42b;  */

void FUN_0069c3b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &uStack_40;
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_0069c42c(puVar1,*param_1);
  if ((int)puVar1 != 0) {
    ppuStack_60 = &PTR_FUN_00a01280;
    uStack_50 = (undefined4)param_3;
    uStack_48 = 0;
    uStack_58 = param_2;
    uStack_4c = uStack_50;
    FUN_0069c1b8(param_1,&ppuStack_60,param_4);
  }
  return;
}



/* Entry: 0069c42c; end: 0069c573;  */

void FUN_0069c42c(long param_1,long *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  char in_NG;
  char in_OV;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  long *unaff_x19;
  undefined1 *unaff_x20;
  long *unaff_x21;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  ulong uVar10;
  undefined1 auStack_1a0 [16];
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  long *plStack_178;
  undefined1 *puStack_170;
  long *plStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined1 auStack_148 [24];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x006a3d70();
  uVar10 = *(ulong *)(param_1 + 8) >> 0x1f;
  plVar9 = param_2;
  uStack_68 = extraout_x8;
  if (uVar10 != 0) {
    puVar3 = &UNK_00915339;
    unaff_x21 = param_2;
    FUN_00532c74();
    unaff_x23 = *(undefined8 *)(param_1 + 8);
    func_0x0066743c(&uStack_100);
    unaff_x22 = &UNK_00915350;
    FUN_00532c74();
    unaff_x24 = &UNK_00915357;
    uVar7 = unaff_x23;
    FUN_00532c74();
    uVar8 = 0x7fffffff;
    func_0x0066741c(&uStack_130);
    uStack_b0 = uStack_f8;
    uStack_b8 = uStack_100;
    uStack_80 = uStack_128;
    uStack_88 = uStack_130;
    puVar4 = &UNK_0091535b;
    puStack_c8 = puVar3;
    plStack_c0 = unaff_x21;
    puStack_a8 = unaff_x22;
    uStack_a0 = unaff_x23;
    puStack_98 = unaff_x24;
    uStack_90 = uVar7;
    FUN_00532c74();
    unaff_x20 = auStack_148;
    puStack_78 = puVar4;
    uStack_70 = uVar8;
    FUN_00575fc4(auStack_148,&puStack_c8,6);
    func_0x006a3d9c();
    uVar7 = extraout_x11;
    puVar1 = extraout_x10;
    if (in_NG == in_OV) {
      uVar7 = extraout_x8_00;
      puVar1 = unaff_x20;
    }
    plVar9 = (long *)0xffffffff;
    param_3 = 0;
    (**(code **)(*param_2 + 0x10))(param_2,0xffffffff,0,puVar1,uVar7);
    func_0x006a3f80();
    unaff_x19 = param_2;
  }
  bVar2 = uVar10 == 0;
  plVar5 = (long *)(ulong)bVar2;
  func_0x006a3c9c(uStack_68);
  if (!bVar2) {
    ___stack_chk_fail();
    func_0x006a3e1c();
    func_0x006a3f28();
    pcStack_158 = FUN_0069c574;
    puStack_190 = unaff_x24;
    uStack_188 = unaff_x23;
    puStack_180 = unaff_x22;
    plStack_178 = unaff_x21;
    puStack_170 = unaff_x20;
    plStack_168 = unaff_x19;
    puStack_160 = &stack0xfffffffffffffff0;
    func_0x006a478c();
    *(undefined1 *)((long)plVar5 + 0xf5) = 1;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      func_0x006a42d8();
      if ((int)plVar9 < 0) {
        func_0x007766a0(auStack_1a0);
        func_0x006a4454();
        func_0x006a444c(*(undefined8 *)(plVar5[0x1b] + 8));
        func_0x006a4060();
        func_0x006a407c();
      }
      else {
        func_0x007766a0(auStack_1a0);
        func_0x006a4454();
        func_0x006a444c(*(undefined8 *)(plVar5[0x1b] + 8));
        func_0x006a4060();
        FUN_00537a7c();
        func_0x006a4628();
        FUN_00537a7c();
        func_0x006a4060();
        func_0x006a407c();
      }
      FUN_007766a8(auStack_1a0);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x006a4354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x10))(plVar6,plVar9,param_3,unaff_x20,unaff_x19);
    return;
  }
  return;
}



/* Entry: 0069c574; end: 0069c653;  */

void FUN_0069c574(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_50 [16];
  
  func_0x006a478c();
  *(undefined1 *)((long)param_1 + 0xf5) = 1;
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006a4354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3);
    return;
  }
  func_0x006a42d8();
  if ((int)param_2 < 0) {
    func_0x007766a0(auStack_50);
    func_0x006a4454();
    func_0x006a444c(*(undefined8 *)(param_1[0x1b] + 8));
    func_0x006a4060();
    func_0x006a407c();
  }
  else {
    func_0x007766a0(auStack_50);
    func_0x006a4454();
    func_0x006a444c(*(undefined8 *)(param_1[0x1b] + 8));
    func_0x006a4060();
    FUN_00537a7c();
    func_0x006a4628();
    FUN_00537a7c();
    func_0x006a4060();
    func_0x006a407c();
  }
  FUN_007766a8(auStack_50);
  return;
}



/* Entry: 0069c654; end: 0069c683;  */

void FUN_0069c654(undefined8 param_1,int param_2,long *param_3)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0069c670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x28))(param_3,"true",4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0069c680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x28))(param_3,"false",5);
  return;
}



/* Entry: 0069c684; end: 0069c6df;  */

void FUN_0069c684(float param_1)

{
  undefined1 in_ZR;
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1a8 [48];
  undefined8 uStack_178;
  undefined1 auStack_138 [48];
  undefined8 uStack_108;
  undefined1 auStack_c8 [48];
  undefined8 uStack_98;
  undefined8 uStack_28;
  
  func_0x006a3d18();
  func_0x006a46c4();
  func_0x006a3d08();
  func_0x006a3c84();
  func_0x006a3ffc();
  func_0x006a3ff4();
  func_0x006a3f40();
  func_0x006a3c9c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x006a3d90();
    func_0x006a3f28();
    func_0x006a3d18();
    func_0x00667464(auStack_c8);
    func_0x006a3d08();
    func_0x006a3c84();
    func_0x006a3ffc();
    func_0x006a3ff4();
    func_0x006a3f40();
    func_0x006a3c9c(uStack_98);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x006a3d90();
      func_0x006a3f28();
      func_0x006a3d18();
      func_0x0066743c(auStack_138);
      func_0x006a3d08();
      func_0x006a3c84();
      func_0x006a3ffc();
      func_0x006a3ff4();
      func_0x006a3f40();
      func_0x006a3c9c(uStack_108);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x006a3d90();
        func_0x006a3f28();
        func_0x006a3d18();
        func_0x00667484(auStack_1a8);
        func_0x006a3d08();
        func_0x006a3c84();
        func_0x006a3ffc();
        func_0x006a3ff4();
        func_0x006a3f40();
        func_0x006a3c9c(uStack_178);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x006a3d90();
          func_0x006a3f28();
          if (NAN(param_1)) {
            func_0x006a4738();
            func_0x006a4374();
          }
          else {
            FUN_006ab3e4(auStack_1f8);
          }
          func_0x006a3d9c();
          func_0x006a3ffc();
          func_0x006a3ff4();
          func_0x006a3f80();
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 0069c6e0; end: 0069c73f;  */

void FUN_0069c6e0(float param_1)

{
  undefined1 in_ZR;
  undefined1 auStack_188 [24];
  undefined1 auStack_138 [48];
  undefined8 uStack_108;
  undefined1 auStack_c8 [48];
  undefined8 uStack_98;
  undefined1 auStack_58 [48];
  undefined8 uStack_28;
  
  func_0x006a3d18();
  func_0x00667464(auStack_58);
  func_0x006a3d08();
  func_0x006a3c84();
  func_0x006a3ffc();
  func_0x006a3ff4();
  func_0x006a3f40();
  func_0x006a3c9c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x006a3d90();
    func_0x006a3f28();
    func_0x006a3d18();
    func_0x0066743c(auStack_c8);
    func_0x006a3d08();
    func_0x006a3c84();
    func_0x006a3ffc();
    func_0x006a3ff4();
    func_0x006a3f40();
    func_0x006a3c9c(uStack_98);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x006a3d90();
      func_0x006a3f28();
      func_0x006a3d18();
      func_0x00667484(auStack_138);
      func_0x006a3d08();
      func_0x006a3c84();
      func_0x006a3ffc();
      func_0x006a3ff4();
      func_0x006a3f40();
      func_0x006a3c9c(uStack_108);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x006a3d90();
        func_0x006a3f28();
        if (NAN(param_1)) {
          func_0x006a4738();
          func_0x006a4374();
        }
        else {
          FUN_006ab3e4(auStack_188);
        }
        func_0x006a3d9c();
        func_0x006a3ffc();
        func_0x006a3ff4();
        func_0x006a3f80();
        return;
      }
    }
  }
  return;
}



/* Entry: 0069c740; end: 0069c79f;  */

void FUN_0069c740(float param_1)

{
  undefined1 in_ZR;
  undefined1 auStack_118 [24];
  undefined1 auStack_c8 [48];
  undefined8 uStack_98;
  undefined1 auStack_58 [48];
  undefined8 uStack_28;
  
  func_0x006a3d18();
  func_0x0066743c(auStack_58);
  func_0x006a3d08();
  func_0x006a3c84();
  func_0x006a3ffc();
  func_0x006a3ff4();
  func_0x006a3f40();
  func_0x006a3c9c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x006a3d90();
    func_0x006a3f28();
    func_0x006a3d18();
    func_0x00667484(auStack_c8);
    func_0x006a3d08();
    func_0x006a3c84();
    func_0x006a3ffc();
    func_0x006a3ff4();
    func_0x006a3f40();
    func_0x006a3c9c(uStack_98);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x006a3d90();
      func_0x006a3f28();
      if (NAN(param_1)) {
        func_0x006a4738();
        func_0x006a4374();
      }
      else {
        FUN_006ab3e4(auStack_118);
      }
      func_0x006a3d9c();
      func_0x006a3ffc();
      func_0x006a3ff4();
      func_0x006a3f80();
      return;
    }
  }
  return;
}



/* Entry: 0069c7a0; end: 0069c7ff;  */

void FUN_0069c7a0(float param_1)

{
  undefined1 in_ZR;
  undefined1 auStack_a8 [24];
  undefined1 auStack_58 [48];
  undefined8 uStack_28;
  
  func_0x006a3d18();
  func_0x00667484(auStack_58);
  func_0x006a3d08();
  func_0x006a3c84();
  func_0x006a3ffc();
  func_0x006a3ff4();
  func_0x006a3f40();
  func_0x006a3c9c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x006a3d90();
    func_0x006a3f28();
    if (NAN(param_1)) {
      func_0x006a4738();
      func_0x006a4374();
    }
    else {
      FUN_006ab3e4(auStack_a8);
    }
    func_0x006a3d9c();
    func_0x006a3ffc();
    func_0x006a3ff4();
    func_0x006a3f80();
    return;
  }
  return;
}



/* Entry: 0069c800; end: 0069c85b;  */

void FUN_0069c800(float param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char cVar3;
  char cVar4;
  undefined8 extraout_x8;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  undefined1 auStack_38 [24];
  
  cVar4 = NAN(param_1);
  cVar3 = '\0';
  if ((bool)cVar4) {
    func_0x006a4738();
    func_0x006a4374();
  }
  else {
    FUN_006ab3e4(auStack_38);
  }
  func_0x006a3d9c();
  uVar1 = extraout_x11;
  puVar2 = extraout_x10;
  if (cVar3 == cVar4) {
    uVar1 = extraout_x8;
    puVar2 = auStack_38;
  }
  func_0x006a3ffc(param_2,puVar2,uVar1);
  func_0x006a3ff4();
  func_0x006a3f80();
  return;
}



/* Entry: 0069c85c; end: 0069c8b7;  */

void FUN_0069c85c(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char cVar3;
  char cVar4;
  undefined8 extraout_x8;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  undefined1 auStack_38 [24];
  
  cVar4 = NAN(param_1);
  cVar3 = '\0';
  if ((bool)cVar4) {
    func_0x006a4738();
    func_0x006a4374();
  }
  else {
    func_0x006ab2c0(auStack_38);
  }
  func_0x006a3d9c();
  uVar1 = extraout_x11;
  puVar2 = extraout_x10;
  if (cVar3 == cVar4) {
    uVar1 = extraout_x8;
    puVar2 = auStack_38;
  }
  func_0x006a3ffc(param_2,puVar2,uVar1);
  func_0x006a3ff4();
  func_0x006a3f80();
  return;
}



/* Entry: 0069c8b8; end: 0069c94f;  */

void FUN_0069c8b8(undefined8 param_1,long *param_2,long *param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x006a472c(*(undefined8 *)(*param_3 + 0x28));
  func_0x006a46b0();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    if (param_2[1] == 0) goto LAB_0069c928;
    param_2 = (long *)*param_2;
  }
  else if (*(char *)((long)param_2 + 0x17) == '\0') goto LAB_0069c928;
  FUN_005728bc(auStack_48,param_2);
  func_0x006a3d9c();
  func_0x006a3ffc();
  func_0x006a3ff4();
  func_0x006a3f80();
LAB_0069c928:
  func_0x006a3ffc();
  func_0x006a472c();
  func_0x006a3f54();
  return;
}



/* Entry: 0069c950; end: 0069c977;  */

void FUN_0069c950(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0069c974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_4 + 0x28))(param_4,puVar2,uVar1);
  return;
}



/* Entry: 0069c978; end: 0069ca17;  */

void FUN_0069c978(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int unaff_w20;
  
  func_0x006a478c();
  if (((byte)UNRECOVERED_JUMPTABLE[1] >> 3 & 1) == 0) {
    FUN_0066586c();
    if (unaff_w20 != 0) {
      FUN_00656024();
    }
    func_0x006a4798();
  }
  else {
    func_0x006a3ffc();
    func_0x006a3f54();
    FUN_00665554();
    func_0x006a3ffc();
    func_0x006a3ff4();
    func_0x006a4798();
    func_0x006a439c();
    func_0x006a41c0();
  }
                    /* WARNING: Could not recover jumptable at 0x0069ca14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 0069ca18; end: 0069ca6f;  */

void FUN_0069ca18(void)

{
  undefined *puVar1;
  int in_w4;
  long *in_x5;
  
  puVar1 = &UNK_00914da7;
  if (in_w4 == 0) {
    puVar1 = &UNK_009105ae;
  }
                    /* WARNING: Could not recover jumptable at 0x0069ca40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_x5 + 0x28))(in_x5,puVar1,2);
  return;
}



/* Entry: 0069ca70; end: 0069caf7;  */

undefined8 * FUN_0069ca70(undefined8 *param_1)

{
  undefined8 *puVar1;
  long extraout_x8;
  
  puVar1 = param_1;
  func_0x006a470c();
  puVar1[5] = extraout_x8 + 0x10;
  *(undefined2 *)(puVar1 + 1) = 0;
  *puVar1 = 0;
  *(undefined4 *)((long)puVar1 + 0xc) = 0;
  *(undefined4 *)((long)puVar1 + 0xf) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[6] = 0;
  puVar1[9] = extraout_x8 + 0x10;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  FUN_0069c0a0();
  return param_1;
}



/* Entry: 0069caf8; end: 0069cb63;  */

byte FUN_0069caf8(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined1 uStack_2a;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_2a = *(undefined1 *)((long)param_1 + 7);
  uStack_28 = *param_1;
  ppuStack_48 = &PTR_FUN_00a0ff58;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_2c = 1;
  uStack_40 = param_3;
  uStack_24 = uStack_28;
  FUN_0069cb64(param_1,param_2,&ppuStack_48);
  bVar1 = uStack_2c._1_1_;
  func_0x006a447c();
  return (bVar1 ^ 0xff) & 1;
}



/* Entry: 0069cb64; end: 0069d95b;  */

long ***** FUN_0069cb64(long *****param_1,long *****param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  bool bVar4;
  long ***ppplVar5;
  undefined1 in_ZR;
  char cVar6;
  undefined1 uVar7;
  char cVar8;
  undefined1 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  long *****ppppplVar13;
  long *****ppppplVar14;
  long ****pppplVar15;
  long ****pppplVar16;
  long *****ppppplVar17;
  undefined8 extraout_x8;
  long lVar18;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long *****ppppplVar19;
  code *extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  code *extraout_x8_12;
  code *extraout_x8_13;
  code *extraout_x8_14;
  long ****pppplVar20;
  long ****extraout_x9;
  long *****extraout_x9_00;
  code *extraout_x9_01;
  code *extraout_x9_02;
  code *extraout_x9_03;
  long *****extraout_x10;
  long ****extraout_x10_00;
  long *****extraout_x10_01;
  long ****extraout_x11;
  undefined8 extraout_x11_00;
  long ****extraout_x12;
  ulong uVar21;
  long extraout_x13;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  long *****unaff_x22;
  long ****pppplVar25;
  long lVar26;
  long *****ppppplVar27;
  ulong uVar28;
  ulong uVar29;
  long ****pppplStack_180;
  undefined1 auStack_178 [16];
  long ***appplStack_168 [3];
  long ***ppplStack_150;
  long ***ppplStack_148;
  undefined8 uStack_140;
  long ****pppplStack_138;
  long ****pppplStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long ***ppplStack_118;
  long ****pppplStack_110;
  long ****pppplStack_108;
  undefined8 uStack_100;
  long ****pppplStack_f8;
  long ***appplStack_f0 [6];
  long ****pppplStack_c0;
  long ****pppplStack_b8;
  uint uStack_b0;
  uint uStack_ac;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_70;
  
  ppppplVar14 = param_1;
  ppppplVar13 = param_2;
  func_0x006a3d70();
  uStack_70 = extraout_x8;
  func_0x006a4648();
  if (ppppplVar13 == (long *****)0x0) {
    pppplStack_110 = (long ****)0x0;
    pppplStack_108 = (long ****)0x0;
    uStack_100 = (long *****)0x0;
    FUN_0054a274(&pppplStack_138,param_2);
    uVar11 = (uint)uStack_128._7_1_;
    in_ZR = uVar11 == 0;
    uStack_b0 = (uint)pppplStack_130;
    pppplStack_b8 = pppplStack_138;
    if (-1 < (int)uVar11) {
      uStack_b0 = uVar11;
      pppplStack_b8 = (long ****)&pppplStack_138;
    }
    pppplStack_c0 = (long ****)&PTR_FUN_00a01280;
    lStack_a8 = 0;
    uStack_ac = uStack_b0;
    FUN_006a4d98(&pppplStack_110,&pppplStack_c0);
    func_0x006a426c();
    func_0x006a449c();
    ppppplVar14 = &pppplStack_110;
    FUN_0066bd90();
    goto LAB_0069d7d0;
  }
  func_0x006a44c4();
  ppppplVar17 = param_1 + 9;
  Hint_Prefetch(*ppppplVar17,0,2,0);
  ppppplVar13 = ppppplVar17;
  pppplStack_180 = (long ****)ppppplVar14;
  FUN_0066e1a4(*ppppplVar17,ppppplVar17,&pppplStack_180);
  lVar18 = 0;
  pppplVar20 = *ppppplVar17;
  uVar21 = (ulong)pppplVar20 >> 0xc ^ (ulong)ppppplVar13 >> 7;
  pppplVar15 = param_1[10];
  pppplVar16 = param_1[0xb];
  uVar9 = SUB81(ppppplVar13,0);
  uVar28 = CONCAT17(uVar9,CONCAT16(uVar9,CONCAT15(uVar9,CONCAT14(uVar9,CONCAT13(uVar9,CONCAT12(uVar9
                                                  ,CONCAT11(uVar9,uVar9))))))) & 0x7f7f7f7f7f7f7f7f;
  ppppplVar14 = (long *****)pppplStack_180;
  while( true ) {
    uVar29 = *(ulong *)((long)pppplVar20 + (uVar21 & (ulong)pppplVar16));
    for (uVar22 = CONCAT17(-((char)(uVar29 >> 0x38) == (char)(uVar28 >> 0x38)),
                           CONCAT16(-((char)(uVar29 >> 0x30) == (char)(uVar28 >> 0x30)),
                                    CONCAT15(-((char)(uVar29 >> 0x28) == (char)(uVar28 >> 0x28)),
                                             CONCAT14(-((char)(uVar29 >> 0x20) ==
                                                       (char)(uVar28 >> 0x20)),
                                                      CONCAT13(-((char)(uVar29 >> 0x18) ==
                                                                (char)(uVar28 >> 0x18)),
                                                               CONCAT12(-((char)(uVar29 >> 0x10) ==
                                                                         (char)(uVar28 >> 0x10)),
                                                                        CONCAT11(-((char)(uVar29 >>
                                                                                         8) ==
                                                                                  (char)(uVar28 >> 8
                                                                                        )),
                                                                                 -((char)uVar29 ==
                                                                                  (char)uVar28))))))
                                   )) & 0x8080808080808080; uVar22 != 0;
        uVar22 = uVar22 - 1 & uVar22) {
      uVar23 = (uVar22 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar22 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      uVar23 = (uVar21 & (ulong)pppplVar16) + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3)
               & (ulong)pppplVar16;
      in_ZR = (long *****)pppplVar15[uVar23 * 2] == ppppplVar14;
      if ((bool)in_ZR) {
        if (pppplVar20 == (long ****)0x0) goto LAB_0069ccd0;
        ppppplVar14 = (long *****)pppplVar15[uVar23 * 2 + 1];
        func_0x006a42e4();
        (*extraout_x8_01)();
        goto LAB_0069d7d0;
      }
    }
    func_0x006a4538(lVar18);
    if ((uVar29 & 1) != 0) break;
    lVar18 = extraout_x8_00 + 8;
    uVar21 = lVar18 + extraout_x13;
    pppplVar20 = extraout_x9;
    ppppplVar14 = extraout_x10;
    pppplVar15 = extraout_x11;
    pppplVar16 = extraout_x12;
  }
LAB_0069ccd0:
  ppppplVar14 = ppppplVar13;
  if (param_3 == (long *)0x0) goto LAB_0069d7d0;
  func_0x006a44c4();
  ppppplVar17 = (long *****)&UNK_00810b8d;
  iVar12 = (int)ppppplVar13[1] + 0x18;
  FUN_004636dc();
  if ((iVar12 != 0) && (*(char *)((long)param_1 + 0x12) == '\x01')) {
    ppppplVar17 = (long *****)&ppplStack_118;
    ppppplVar14 = param_2;
    FUN_0065381c(param_2,ppppplVar17,&uStack_120);
    if ((int)ppppplVar14 != 0) {
      func_0x006a44c4();
      FUN_0068cb34(&pppplStack_110,ppppplVar17,param_2,ppplStack_118);
      func_0x006a4778();
      cVar8 = (long)uStack_100 < 0;
      in_ZR = uStack_100._7_1_ == 0;
      cVar6 = '\0';
      ppppplVar14 = (long *****)pppplStack_108;
      ppppplVar27 = (long *****)pppplStack_110;
      if (!(bool)cVar8) {
        ppppplVar14 = (long *****)(ulong)uStack_100._7_1_;
        ppppplVar27 = &pppplStack_110;
      }
      FUN_00532bb8(ppppplVar27,ppppplVar14,&pppplStack_138,&ppplStack_150);
      if (((ulong)ppppplVar27 & 1) != 0) {
        ppppplVar14 = (long *****)param_1[0xd];
        if (ppppplVar14 == (long *****)0x0) {
          ppppplVar14 = param_2;
          FUN_0069c12c(param_2,&pppplStack_138,&ppplStack_150);
        }
        else {
          (*(code *)(*ppppplVar14)[4])(ppppplVar14,param_2,&pppplStack_138,&ppplStack_150);
        }
        if (ppppplVar14 != (long *****)0x0) {
          pppplStack_c0 = (long ****)&PTR_FUN_00a0ef08;
          pppplStack_b8 = (long ****)0x0;
          func_0x006a470c();
          uStack_b0 = uStack_b0 & 0xffffff00;
          lStack_a8 = extraout_x8_02 + 0x10;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          unaff_x22 = &pppplStack_c0;
          FUN_006863f0();
          func_0x006a42e4();
          func_0x006a4444();
          FUN_0068cb34(appplStack_168,ppppplVar17,param_2,uStack_120);
          func_0x006a4758();
          uVar2 = extraout_x11_00;
          pppplVar15 = extraout_x10_00;
          if (cVar8 == cVar6) {
            uVar2 = extraout_x8_03;
            pppplVar15 = appplStack_168;
          }
          ppppplVar27 = unaff_x22;
          FUN_00549e14(unaff_x22,pppplVar15,uVar2);
          if (((ulong)ppppplVar27 & 1) == 0) {
            func_0x006a42d8();
            FUN_00776698(auStack_178);
            FUN_00555478(auStack_178,&pppplStack_110);
            ppppplVar17 = (long *****)&UNK_00914e12;
            func_0x00698198(auStack_178);
            FUN_007766a8(auStack_178);
          }
          else {
            ppppplVar14 = ppppplVar27;
            func_0x006a3ffc();
            func_0x006a3f54();
            func_0x006a3cb0();
            ppppplVar17 = extraout_x10_01;
            if (cVar8 == cVar6) {
              ppppplVar17 = extraout_x9_00;
            }
            func_0x006a3ffc();
            func_0x006a3ff4();
            func_0x006a3ffc();
            func_0x006a439c();
            func_0x006a3f54();
            func_0x006a47b8();
            FUN_0069de10();
            func_0x006a437c((*ppppplVar14)[0xe]);
            func_0x006a4424(*(undefined8 *)(*param_3 + 0x10));
            func_0x006a4108();
            FUN_0069cb64();
            func_0x006a4424(*(undefined8 *)(*param_3 + 0x18));
            func_0x006a437c((*ppppplVar14)[0x10],ppppplVar14);
          }
          func_0x006a45d0();
          if (unaff_x22 != (long *****)0x0) {
            func_0x006a3ee0();
          }
          ppppplVar14 = &pppplStack_c0;
          FUN_006862fc();
          func_0x006a4334();
          func_0x006a426c();
          func_0x006a4100();
          if (((ulong)ppppplVar27 & 1) != 0) goto LAB_0069d7d0;
          goto LAB_0069cf08;
        }
        func_0x006a42d8();
        FUN_00776698(&pppplStack_c0);
        FUN_0054a2c4();
        FUN_00555478();
        ppppplVar14 = (long *****)&UNK_00914e07;
        FUN_00554ab4();
        FUN_007766a8(&pppplStack_c0);
      }
      ppppplVar17 = ppppplVar14;
      func_0x006a4334();
      func_0x006a426c();
      func_0x006a4100();
    }
  }
LAB_0069cf08:
  func_0x006a44c4();
  ppplStack_150 = (long ***)0x0;
  ppplStack_148 = (long ***)0x0;
  uStack_140 = 0;
  if (*(char *)((long)ppppplVar13[4] + 0x53) == '\x01') {
    pppplStack_c0 = ppppplVar13[7];
    func_0x006a45c4();
    pppplStack_c0 = ppppplVar13[7] + 0xb;
    func_0x006a45c4();
  }
  else {
    FUN_0068b260(ppppplVar17,param_2,&ppplStack_150);
  }
  if ((*(char *)((long)param_1 + 0x11) == '\x01') && (ppplStack_150 != ppplStack_148)) {
    FUN_006a2350(ppplStack_150,ppplStack_148,
                 LZCOUNT((long)ppplStack_148 - (long)ppplStack_150 >> 3) << 1 ^ 0x7e,1);
  }
  ppplVar5 = ppplStack_148;
  pppplVar15 = (long ****)ppplStack_150;
LAB_0069cfac:
  in_ZR = pppplVar15 == (long ****)ppplVar5;
  if (!(bool)in_ZR) {
    ppppplVar14 = (long *****)*pppplVar15;
    pppplVar16 = pppplVar15;
    if (((*(char *)((long)param_1 + 6) != '\x01') ||
        ((*(byte *)((long)ppppplVar14 + 1) >> 5 & 1) == 0)) ||
       (func_0x006a4560(), (int)pppplVar16 == 9)) {
LAB_0069cff4:
      uVar11 = (uint)pppplVar16;
      if ((*(byte *)((long)ppppplVar14 + 1) >> 5 & 1) == 0) {
        ppppplVar13 = ppppplVar17;
        FUN_0068ae9c(ppppplVar17,param_2,ppppplVar14);
        if ((((ulong)ppppplVar13 & 1) == 0) && (*(char *)((long)ppppplVar14[4][4] + 0x53) != '\x01')
           ) {
          uVar11 = 0;
        }
        else {
          uVar11 = 1;
        }
      }
      else {
        func_0x006a43f4();
      }
      pppplStack_138 = (long ****)0x0;
      pppplStack_130 = (long ****)0x0;
      uStack_128 = (long *****)0x0;
      ppppplVar13 = ppppplVar14;
      func_0x006595dc();
      iVar12 = (int)ppppplVar13;
      if (iVar12 == 0) {
        bVar10 = false;
      }
      else {
        func_0x006a3fa4();
        func_0x0068efe0();
        if ((((ulong)ppppplVar13[1] & 1) == 0) || (*(int *)((long)ppppplVar13[1] + 0x1f) == 0)) {
          ppppplVar13 = ppppplVar14;
          FUN_00656024();
          pppplVar16 = ppppplVar17[0xb];
          func_0x006a42e4(pppplVar16,ppppplVar13);
          (*extraout_x8_04)();
          func_0x006a3fa4(&pppplStack_c0);
          FUN_0068e90c();
          while( true ) {
            func_0x006a3fa4(&pppplStack_110);
            FUN_0068e95c();
            pppplVar25 = pppplStack_c0;
            pppplVar20 = pppplStack_110;
            FUN_0069072c(appplStack_f0);
            uVar7 = pppplVar20 <= pppplVar25;
            uVar9 = pppplVar25 == pppplVar20;
            if ((bool)uVar9) break;
            pppplVar20 = pppplVar16;
            func_0x006a4444((*pppplVar16)[2]);
            ppppplVar27 = (long *****)ppppplVar13[7];
            FUN_00699298();
            FUN_00656c60(ppppplVar27);
            func_0x006a47d8();
            if (!(bool)uVar7 || (bool)uVar9) {
                    /* WARNING: Could not recover jumptable at 0x0069d174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((ulong)(byte)(&UNK_00827d68)[extraout_x8_05] * 4 + 0x69d178))();
              return ppppplVar27;
            }
            pppplVar25 = ppppplVar13[7];
            FUN_00699298(pppplVar20);
            ppppplVar27 = (long *****)(pppplVar25 + 0xb);
            FUN_00656c60(ppppplVar27);
            func_0x006a47d8();
            if (!(bool)uVar7 || (bool)uVar9) {
                    /* WARNING: Could not recover jumptable at 0x0069d24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((ulong)(byte)(&UNK_00827d72)[extraout_x8_06] * 4 + 0x69d250))();
              return ppppplVar27;
            }
            if (pppplStack_130 < uStack_128) {
              ppppplVar19 = (long *****)(pppplStack_130 + 1);
              *pppplStack_130 = (long ***)pppplVar20;
            }
            else {
              ppppplVar27 = &pppplStack_138;
              FUN_006a2d64(ppppplVar27,((long)pppplStack_130 - (long)pppplStack_138 >> 3) + 1);
              lVar18 = (long)pppplStack_130 - (long)pppplStack_138;
              appplStack_f0[0] = (long ***)&uStack_128;
              if (ppppplVar27 == (long *****)0x0) {
                pppplVar25 = (long ****)0x0;
                lVar26 = lVar18;
              }
              else {
                pppplVar25 = (long ****)&uStack_128;
                FUN_006a2e24();
                lVar26 = (long)pppplStack_130 - (long)pppplStack_138;
              }
              puVar1 = (undefined8 *)((long)pppplVar25 + lVar18);
              *puVar1 = pppplVar20;
              pppplStack_110 = pppplVar25;
              pppplStack_108 = (long ****)puVar1;
              uStack_100 = (long *****)(puVar1 + 1);
              pppplStack_f8 = pppplVar25 + (long)ppppplVar27;
              _memcpy((long *****)((long)puVar1 - lVar26));
              ppppplVar19 = uStack_100;
              ppppplVar27 = uStack_128;
              uStack_128 = (long *****)pppplStack_f8;
              pppplStack_130 = (long ****)uStack_100;
              uStack_100 = (long *****)pppplStack_138;
              pppplStack_f8 = (long ****)ppppplVar27;
              pppplStack_110 = pppplStack_138;
              pppplStack_108 = pppplStack_138;
              pppplStack_138 = (long ****)((long)puVar1 - lVar26);
              FUN_006a2e64(&pppplStack_110);
            }
            pppplStack_130 = (long ****)ppppplVar19;
            FUN_0068fbf0(&pppplStack_c0);
          }
          func_0x006a42f0();
          FUN_0069072c();
          bVar10 = true;
        }
        else {
          func_0x006a3fa4();
          FUN_0068e634();
          lVar26 = 8;
          for (lVar18 = 0; lVar18 < *(int *)(ppppplVar13 + 1); lVar18 = lVar18 + 1) {
            ppppplVar27 = ppppplVar13;
            if (((ulong)*ppppplVar13 & 1) != 0) {
              ppppplVar27 = (long *****)((long)*ppppplVar13 + lVar26 + -1);
            }
            pppplStack_c0 = *ppppplVar27;
            FUN_006a2c78(&pppplStack_138,&pppplStack_c0);
            lVar26 = lVar26 + 8;
          }
          bVar10 = false;
        }
        ppppplVar13 = ppppplVar14;
        FUN_00656024();
        pppplVar20 = pppplStack_130;
        pppplVar16 = pppplStack_138;
        appplStack_168[0] = (long ***)ppppplVar13[7];
        lVar18 = (long)pppplStack_130 - (long)pppplStack_138 >> 3;
        pppplStack_c0 = (long ****)0x0;
        pppplStack_b8 = (long ****)0x0;
        if (0x80 < lVar18) {
          FUN_006a3160(&pppplStack_110,lVar18);
          FUN_006a31b8(&pppplStack_c0,&pppplStack_110);
          FUN_006a33fc(&pppplStack_110);
        }
        FUN_006a31e8(pppplVar16,pppplVar20,appplStack_168,lVar18,pppplStack_c0,pppplStack_b8);
        ppppplVar13 = &pppplStack_c0;
        FUN_006a33fc();
      }
      for (uVar21 = 0; (uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)) != uVar21; uVar21 = uVar21 + 1
          ) {
        func_0x006a4108();
        func_0x006a4434();
        func_0x006a4560();
        if ((int)ppppplVar13 == 10) {
          if ((*(char *)((long)ppppplVar14[7] + 0x8d) == '\x01') &&
             (*(char *)(param_1 + 1) == '\x01')) goto LAB_0069d654;
          ppppplVar27 = param_1;
          FUN_0069de10(param_1,ppppplVar14);
          ppppplVar13 = ppppplVar27;
          if ((*(byte *)((long)ppppplVar14 + 1) >> 5 & 1) == 0) {
            func_0x006a3fa4();
            FUN_0068dc98();
          }
          else if (iVar12 == 0) {
            func_0x006a3fa4();
            func_0x0068e124();
          }
          func_0x006a40d8((*ppppplVar27)[0xe]);
          (*extraout_x8_08)();
          func_0x006a4424(*(undefined8 *)(*param_3 + 0x10));
          func_0x006a40d8((*ppppplVar27)[0xf]);
          (*extraout_x8_09)();
          if (((ulong)ppppplVar13 & 1) == 0) {
            func_0x006a47b8();
            FUN_0069cb64();
          }
          func_0x006a4424(*(undefined8 *)(*param_3 + 0x18));
          func_0x006a40d8((*ppppplVar27)[0x10]);
          (*extraout_x8_10)();
        }
        else {
          func_0x006a41cc(*(undefined8 *)(*param_3 + 0x30));
          (*extraout_x8_07)();
          func_0x006a4108();
          FUN_0069df84();
          func_0x006a41e0();
          func_0x006a41c0();
          (*extraout_x9_01)();
        }
      }
      goto LAB_0069d6ac;
    }
    func_0x006a4560();
    uVar11 = (uint)pppplVar16;
    if (uVar11 == 10) goto LAB_0069cff4;
    func_0x006a43f4();
    func_0x006a4108();
    func_0x006a4434();
    func_0x006a41cc(*(undefined8 *)(*param_3 + 0x38));
    (*extraout_x8_13)();
    for (uVar24 = 0; bVar10 = (uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)) == uVar24, !bVar10;
        uVar24 = uVar24 + 1) {
      if (uVar24 != 0) {
        func_0x006a3ffc();
        (*extraout_x8_14)(param_3,", ",2);
      }
      FUN_0069df84(param_1,param_2,ppppplVar17,ppppplVar14,uVar24,param_3);
    }
    func_0x006a41e0();
    puVar3 = &UNK_00914e2d;
    if (bVar10) {
      puVar3 = &UNK_00914e30;
    }
    (*extraout_x9_03)(param_3,puVar3,2);
    goto LAB_0069d6e4;
  }
  if (((ulong)param_1[2] & 1) == 0) {
    FUN_006895b0(ppppplVar17,param_2);
    func_0x006a449c();
  }
  ppppplVar14 = (long *****)&ppplStack_150;
  FUN_00666dd0();
  unaff_x22 = param_2;
LAB_0069d7d0:
  func_0x006a3c9c(uStack_70);
  if ((bool)in_ZR) {
    return ppppplVar14;
  }
  ___stack_chk_fail();
  func_0x006a45d0();
  if (unaff_x22 != (long *****)0x0) {
    func_0x006a3ee0();
  }
  ppppplVar14 = &pppplStack_c0;
  FUN_006862fc();
  func_0x006a4334();
  func_0x006a426c();
  func_0x006a4100();
  func_0x006a3f28();
  *ppppplVar14 = (long ****)&PTR_FUN_00a0ff58;
  if ((*(byte *)((long)ppppplVar14 + 0x1d) & 1) == 0) {
    (*(code *)(*ppppplVar14[1])[3])(ppppplVar14[1],*(undefined4 *)(ppppplVar14 + 3));
  }
  return ppppplVar14;
LAB_0069d654:
  do {
    cVar8 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0xb63d98,0x10);
    if (bVar4) {
      cVar8 = ExclusiveMonitorsStatus();
      lRam0000000000b63d98 = lRam0000000000b63d98 + 1;
    }
  } while (cVar8 != '\0');
  func_0x006a41cc(*(undefined8 *)(*param_3 + 0x30));
  (*extraout_x8_11)();
  func_0x006a3ffc();
  (*extraout_x8_12)(param_3,&UNK_0091532e,10);
  func_0x006a41e0();
  func_0x006a41c0();
  (*extraout_x9_02)();
LAB_0069d6ac:
  pppplVar16 = pppplStack_130;
  ppppplVar14 = (long *****)pppplStack_138;
  if (bVar10) {
    for (; ppppplVar14 != (long *****)pppplVar16; ppppplVar14 = ppppplVar14 + 1) {
      if (*ppppplVar14 != (long ****)0x0) {
        (*(code *)(**ppppplVar14)[1])();
      }
    }
  }
  FUN_006a2eb4(&pppplStack_138);
LAB_0069d6e4:
  pppplVar15 = pppplVar15 + 1;
  goto LAB_0069cfac;
}



/* Entry: 0069d95c; end: 0069d95f;  */

undefined8 * FUN_0069d95c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0ff58;
  if ((*(byte *)((long)param_1 + 0x1d) & 1) == 0) {
    (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],*(undefined4 *)(param_1 + 3));
  }
  return param_1;
}



/* Entry: 0069d960; end: 0069de0f;  */

void FUN_0069d960(void)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long lVar3;
  code *extraout_x8_02;
  long extraout_x8_03;
  code *pcVar4;
  code *extraout_x8_04;
  code *extraout_x8_05;
  long extraout_x8_06;
  code *extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  int extraout_w9_05;
  int unaff_w19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 auStack_f8 [24];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  int iStack_b0;
  undefined7 uStack_ac;
  undefined4 uStack_a5;
  int iStack_a0;
  undefined8 uStack_9c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  func_0x006a4718();
  lVar7 = 0;
  lVar5 = 0;
  do {
    lVar3 = *unaff_x21;
    if ((int)((ulong)(unaff_x21[1] - lVar3) >> 4) <= lVar5) {
      return;
    }
    switch(*(undefined4 *)(lVar3 + lVar7 + 4)) {
    case 0:
      func_0x006a4014();
      func_0x006a3f30(*(undefined8 *)(*unaff_x20 + 0x30));
      (*extraout_x8)();
      if (*(char *)(unaff_x22 + 8) == '\x01') {
        FUN_0069e5c8();
        goto code_r0x0069daac;
      }
      FUN_0069e698();
      goto code_r0x0069db38;
    case 1:
      func_0x006a4014();
      func_0x006a4390();
      func_0x006a3f30();
      pcVar4 = extraout_x8_02;
      if (extraout_w9_00 != 1) {
        func_0x006a429c();
        puStack_c8 = (undefined8 *)(ulong)*(uint *)(lVar3 + lVar7 + 8);
        uVar2 = 0x3008;
code_r0x0069db28:
        lStack_c0 = CONCAT62(lStack_c0._2_6_,uVar2);
        FUN_0069e6f8();
        goto code_r0x0069db38;
      }
      goto code_r0x0069daa8;
    case 2:
      func_0x006a4014();
      func_0x006a4390();
      func_0x006a3f30();
      pcVar4 = extraout_x8_01;
      if (extraout_w9 != 1) {
        func_0x006a429c();
        puStack_c8 = *(undefined8 **)(lVar3 + lVar7 + 8);
        uVar2 = 0x3010;
        goto code_r0x0069db28;
      }
code_r0x0069daa8:
      (*pcVar4)();
code_r0x0069daac:
      func_0x006a4674();
code_r0x0069db38:
      func_0x006a43c0();
      pcVar4 = *(code **)(extraout_x8_03 + 0x28);
code_r0x0069db64:
      (*pcVar4)();
      break;
    case 3:
      FUN_0069e56c();
      puVar6 = *(undefined8 **)(lVar3 + lVar7 + 8);
      lVar3 = (long)*(char *)((long)puVar6 + 0x17);
      puStack_c8 = puVar6;
      if (lVar3 < 0) {
        lVar3 = puVar6[1];
        puStack_c8 = (undefined8 *)*puVar6;
      }
      iStack_b0 = (int)lVar3;
      lStack_c0 = (long)puStack_c8 + (long)iStack_b0;
      uStack_b8 = 0;
      uStack_ac = 0;
      uStack_a5 = 0;
      uStack_9c = 0x7ff8000000000000;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_e0 = 0;
      lVar3 = (long)*(char *)((long)puVar6 + 0x17);
      if (lVar3 < 0) {
        lVar3 = puVar6[1];
      }
      iStack_a0 = iStack_b0;
      if ((unaff_w19 < 1) || (lVar3 == 0)) {
code_r0x0069dbfc:
        func_0x006a4390();
        if (extraout_w9_02 == 1) {
          func_0x006a3f30();
          (*extraout_x8_05)();
          func_0x006a4674();
code_r0x0069dc24:
          func_0x006a43c0();
          puVar6 = (undefined8 *)(extraout_x8_06 + 0x28);
        }
        else {
          func_0x006a3f30();
          (*extraout_x8_07)();
          lVar3 = (long)*(char *)((long)puVar6 + 0x17);
          puVar1 = puVar6;
          if (lVar3 < 0) {
            puVar1 = (undefined8 *)*puVar6;
            lVar3 = puVar6[1];
          }
          FUN_005728bc(auStack_f8,puVar1,lVar3);
          func_0x006a3d9c();
          (**(code **)(*unaff_x20 + 0x28))();
          func_0x006a3f80();
          func_0x006a43c0();
          puVar6 = (undefined8 *)(extraout_x8_08 + 0x28);
        }
      }
      else {
        puVar1 = &uStack_e0;
        FUN_006a4d74(puVar1,&puStack_c8);
        if ((int)puVar1 == 0) goto code_r0x0069dbfc;
        if (*(char *)(unaff_x22 + 8) == '\x01') {
          func_0x006a4390();
          func_0x006a3f30();
          (*extraout_x8_04)();
          func_0x006a4674();
          goto code_r0x0069dc24;
        }
        func_0x006a4390();
        if (extraout_w9_04 == 1) {
          func_0x006a4274();
          func_0x006a429c();
        }
        else {
          func_0x006a4274();
          func_0x006a429c();
          func_0x006a44b4(*(undefined8 *)(*unaff_x20 + 0x10));
        }
        func_0x006a43d4();
        func_0x006a43c0();
        if (extraout_w9_05 == 1) {
          puVar6 = (undefined8 *)(extraout_x8_10 + 0x28);
        }
        else {
          func_0x006a44b4(*(undefined8 *)(extraout_x8_10 + 0x18));
          puVar6 = (undefined8 *)(*unaff_x20 + 0x28);
        }
      }
      (*(code *)*puVar6)();
      FUN_0066bd90(&uStack_e0);
      FUN_0054dff8(&puStack_c8);
      break;
    case 4:
      func_0x006a4014();
      if (*(char *)(unaff_x22 + 8) == '\x01') {
        func_0x006a4390();
        func_0x006a3f30();
        pcVar4 = extraout_x8_00;
        goto code_r0x0069daa8;
      }
      func_0x006a4390();
      func_0x006a4274();
      if (extraout_w9_01 == 1) {
        func_0x006a429c();
      }
      else {
        func_0x006a429c();
        func_0x006a44b4(*(undefined8 *)(*unaff_x20 + 0x10));
      }
      func_0x006a43d4();
      func_0x006a43c0();
      if (extraout_w9_03 == 1) {
        pcVar4 = *(code **)(extraout_x8_09 + 0x28);
      }
      else {
        func_0x006a44b4(*(undefined8 *)(extraout_x8_09 + 0x18));
        pcVar4 = *(code **)(*unaff_x20 + 0x28);
      }
      goto code_r0x0069db64;
    }
    lVar5 = lVar5 + 1;
    lVar7 = lVar7 + 0x10;
  } while( true );
}



/* Entry: 0069de10; end: 0069ded3;  */

undefined8 FUN_0069de10(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong extraout_x8;
  undefined8 *puVar2;
  long extraout_x9;
  ulong uVar3;
  ulong extraout_x10;
  long lVar4;
  long extraout_x11;
  ulong uVar5;
  long extraout_x12;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x19;
  long unaff_x20;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  ulong uVar16;
  
  func_0x006a41a0();
  Hint_Prefetch(*(undefined8 *)(param_1 + 0x28),0,2,0);
  FUN_006a2340(*(undefined8 *)(param_1 + 0x28));
  lVar4 = *(long *)(unaff_x19 + 0x30);
  uVar3 = *(ulong *)(unaff_x19 + 0x38);
  uVar1 = *(ulong *)(unaff_x19 + 0x28);
  uVar5 = uVar1 >> 0xc ^ param_2 >> 7;
  bVar6 = (byte)param_2 & 0x7f;
  bVar9 = bVar6;
  bVar10 = bVar6;
  bVar11 = bVar6;
  bVar12 = bVar6;
  bVar13 = bVar6;
  bVar14 = bVar6;
  bVar15 = bVar6;
  while( true ) {
    uVar16 = *(ulong *)(uVar1 + (uVar5 & uVar3));
    for (uVar7 = CONCAT17(-((byte)(uVar16 >> 0x38) == bVar15),
                          CONCAT16(-((byte)(uVar16 >> 0x30) == bVar14),
                                   CONCAT15(-((byte)(uVar16 >> 0x28) == bVar13),
                                            CONCAT14(-((byte)(uVar16 >> 0x20) == bVar12),
                                                     CONCAT13(-((byte)(uVar16 >> 0x18) == bVar11),
                                                              CONCAT12(-((byte)(uVar16 >> 0x10) ==
                                                                        bVar10),CONCAT11(-((byte)(
                                                  uVar16 >> 8) == bVar9),-((byte)uVar16 == bVar6))))
                                                  )))) & 0x8080808080808080; uVar7 != 0;
        uVar7 = uVar7 - 1 & uVar7) {
      uVar8 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = (uVar5 & uVar3) + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar3;
      if (*(long *)(lVar4 + uVar8 * 0x10) == unaff_x20) {
        puVar2 = (undefined8 *)(unaff_x19 + 0x20);
        if (uVar1 != 0) {
          puVar2 = (undefined8 *)(lVar4 + uVar8 * 0x10 + 8);
        }
        goto LAB_0069dec0;
      }
    }
    func_0x006a4538();
    if ((uVar16 & 1) != 0) break;
    uVar5 = extraout_x9 + 8 + extraout_x12;
    uVar1 = extraout_x8;
    uVar3 = extraout_x10;
    lVar4 = extraout_x11;
  }
  puVar2 = (undefined8 *)(unaff_x19 + 0x20);
LAB_0069dec0:
  return *puVar2;
}



/* Entry: 0069ded4; end: 0069df83;  */

void FUN_0069ded4(void)

{
  undefined8 in_x4;
  
  func_0x006a4718();
  func_0x0048d000(in_x4);
  FUN_00699298();
  FUN_0069df84();
  func_0x006a447c();
  return;
}



/* Entry: 0069df84; end: 0069e427;  */

void FUN_0069df84(long param_1,code *param_2,undefined8 param_3,code *param_4,code *param_5,
                 ulong param_6,undefined8 param_7)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  code *UNRECOVERED_JUMPTABLE_00;
  code *pcVar10;
  code *pcVar11;
  ulong uVar12;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar13;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x11;
  undefined1 auStack_200 [112];
  code *pcStack_190;
  code *pcStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  code *pcStack_100;
  code *pcStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 auStack_a0 [24];
  long alStack_88 [6];
  undefined8 uStack_58;
  
  lVar6 = param_1;
  uVar9 = param_3;
  UNRECOVERED_JUMPTABLE_00 = param_4;
  pcVar11 = param_5;
  uVar12 = param_6;
  func_0x006a3d70();
  uStack_58 = extraout_x8;
  FUN_0069de10();
  cVar4 = *(char *)(*(long *)(param_4 + 0x38) + 0x8d);
  if (cVar4 == '\x01') {
    cVar4 = *(char *)(param_1 + 8);
    uVar5 = cVar4 == '\x01';
    if ((bool)uVar5) {
      do {
        cVar4 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(0xb63d98,0x10);
        if (bVar1) {
          cVar4 = ExclusiveMonitorsStatus();
          lRam0000000000b63d98 = lRam0000000000b63d98 + 1;
        }
      } while (cVar4 != '\0');
      func_0x006a4798();
      func_0x006a3c9c(uStack_58);
      if ((bool)uVar5) {
        func_0x006a44cc(param_6,&UNK_0091532e,10);
                    /* WARNING: Could not recover jumptable at 0x0069e264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      goto LAB_0069e3e4;
    }
  }
  uVar5 = 0;
  uVar2 = cVar4 != '\0';
  FUN_00656c60(param_4);
  func_0x006a47d8();
  if (!(bool)uVar2 || (bool)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0069e048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_00827d81)[extraout_x8_00] * 4 + 0x69e04c))();
    return;
  }
  func_0x006a3c9c(uStack_58);
  if ((bool)uVar5) {
    func_0x006a44cc();
    return;
  }
LAB_0069e3e4:
  ___stack_chk_fail();
  func_0x006a3d90();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  plVar7 = alStack_88;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x006a3f28();
  pcStack_d8 = FUN_0069e428;
  uStack_110 = param_3;
  pcStack_108 = param_5;
  pcStack_100 = param_2;
  pcStack_f8 = param_4;
  lStack_f0 = lVar6;
  uStack_e8 = param_6;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x006a3d70();
  uVar13 = (uint)*(byte *)((long)plVar7 + 5);
  cVar3 = SBORROW4(uVar13,1);
  cVar4 = (int)(uVar13 - 1) < 0;
  uVar5 = uVar13 == 1;
  uStack_118 = extraout_x8_01;
  if ((bool)uVar5) {
    uVar8 = (ulong)*(uint *)(uVar12 + 4);
    func_0x006a46c4();
    func_0x006a3d08();
    func_0x006a3c84();
    uVar9 = extraout_x11;
    if (cVar4 == cVar3) {
      uVar9 = extraout_x8_02;
    }
    func_0x006a3ffc();
    func_0x006a3ff4();
    func_0x006a3f40();
    func_0x006a3c9c(uStack_118);
    pcVar10 = UNRECOVERED_JUMPTABLE_00;
    pcVar11 = param_4;
    UNRECOVERED_JUMPTABLE_00 = param_2;
    if ((bool)uVar5) {
      return;
    }
  }
  else {
    uVar8 = uVar12;
    pcVar10 = UNRECOVERED_JUMPTABLE_00;
    FUN_0069de10();
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 0x60);
    func_0x006a3c9c(uStack_118);
    if ((bool)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0069e4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  ___stack_chk_fail();
  func_0x006a3d90();
  func_0x006a3f28();
  pcStack_168 = FUN_0069e510;
  pcStack_190 = UNRECOVERED_JUMPTABLE_00;
  pcStack_188 = pcVar11;
  uStack_180 = uVar12;
  uStack_178 = param_7;
  ppuStack_170 = &puStack_e0;
  FUN_0069ca70(auStack_200);
  FUN_0069ded4(auStack_200,plVar7,uVar8,uVar9,pcVar10);
  func_0x006a44bc();
  return;
}



/* Entry: 0069e428; end: 0069e50f;  */

void FUN_0069e428(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,ulong param_6,undefined8 param_7)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 auStack_130 [112];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_48;
  
  func_0x006a3d70();
  uVar6 = (uint)*(byte *)((long)param_1 + 5);
  cVar1 = SBORROW4(uVar6,1);
  cVar2 = (int)(uVar6 - 1) < 0;
  uVar3 = uVar6 == 1;
  uStack_48 = extraout_x8;
  if ((bool)uVar3) {
    uVar4 = (ulong)*(uint *)(param_6 + 4);
    func_0x006a46c4();
    func_0x006a3d08();
    func_0x006a3c84();
    param_3 = extraout_x11;
    if (cVar2 == cVar1) {
      param_3 = extraout_x8_00;
    }
    func_0x006a3ffc();
    func_0x006a3ff4();
    func_0x006a3f40();
    func_0x006a3c9c(uStack_48);
    uVar5 = param_4;
    param_5 = unaff_x21;
    param_4 = unaff_x22;
    if ((bool)uVar3) {
      return;
    }
  }
  else {
    uVar4 = param_6;
    uVar5 = param_4;
    FUN_0069de10();
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x60);
    func_0x006a3c9c(uStack_48);
    if ((bool)uVar3) {
                    /* WARNING: Could not recover jumptable at 0x0069e4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  ___stack_chk_fail();
  func_0x006a3d90();
  func_0x006a3f28();
  pcStack_98 = FUN_0069e510;
  uStack_c0 = param_4;
  uStack_b8 = param_5;
  uStack_b0 = param_6;
  uStack_a8 = param_7;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0069ca70(auStack_130);
  FUN_0069ded4(auStack_130,param_1,uVar4,param_3,uVar5);
  func_0x006a44bc();
  return;
}



/* Entry: 0069e510; end: 0069e56b;  */

void FUN_0069e510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_a0 [112];
  
  FUN_0069ca70(auStack_a0);
  FUN_0069ded4(auStack_a0,param_1,param_2,param_3,param_4);
  func_0x006a44bc();
  return;
}



/* Entry: 0069e56c; end: 0069e5c7;  */

void FUN_0069e56c(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 **ppuVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 *puVar2;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [23];
  undefined1 uStack_219;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_1e8;
  undefined1 auStack_1a8 [48];
  undefined8 uStack_178;
  
  func_0x006a3cdc();
  func_0x006a46c4();
  func_0x006a3d08();
  func_0x006a3c84();
  func_0x006a3ffc();
  func_0x006a3ff4();
  func_0x006a3f40();
  func_0x006a3c9c(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x006a3d90();
    func_0x006a3f28();
    func_0x006a3cdc();
    FUN_00532c74();
    func_0x006a3d08();
    func_0x006a3c84();
    func_0x006a3ffc();
    func_0x006a3ff4();
    func_0x006a3f40();
    func_0x006a3c9c(extraout_x8_00);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x006a3d90();
      func_0x006a3f28();
      func_0x006a3cdc();
      func_0x006a3d08();
      func_0x006a3c84();
      func_0x006a3ffc();
      func_0x006a3ff4();
      func_0x006a3f40();
      func_0x006a3c9c(extraout_x8_01);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x006a3d90();
        func_0x006a3f28();
        func_0x006a3cdc();
        uStack_178 = extraout_x8_02;
        func_0x00667484(auStack_1a8);
        func_0x006a3d08();
        func_0x006a3c84();
        func_0x006a3ffc();
        func_0x006a3ff4();
        func_0x006a3f40();
        func_0x006a3c9c(uStack_178);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x006a3d90();
          func_0x006a3f28();
          func_0x006a3cdc();
          uStack_248 = 0;
          uStack_240 = 0;
          uStack_238 = 0;
          puVar2 = &uStack_248;
          uStack_1e8 = extraout_x8_03;
          FUN_0054ac10();
          ppuVar1 = &puStack_218;
          puStack_218 = puVar2;
          uStack_210 = param_2;
          FUN_0055d0c8(auStack_230);
          func_0x006a3f88(uStack_219);
          func_0x006a3ffc();
          func_0x006a3ff4();
          func_0x006a4140();
          func_0x006a3f80();
          func_0x006a3c9c(uStack_1e8);
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x006a4140();
          func_0x006a3f80();
          func_0x006a3f28();
          if ((long)*(char *)((long)ppuVar1 + 0x17) < 0) {
            puVar2 = (undefined8 *)((long)ppuVar1[1] + -1);
            ppuVar1[1] = puVar2;
            ppuVar1 = (undefined8 **)*ppuVar1;
          }
          else {
            puVar2 = (undefined8 *)((long)*(char *)((long)ppuVar1 + 0x17) + -1);
            *(byte *)((long)ppuVar1 + 0x17) = (byte)puVar2 & 0x7f;
          }
          *(undefined1 *)((long)ppuVar1 + (long)puVar2) = 0;
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 0069e5c8; end: 0069e62f;  */

void FUN_0069e5c8(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 **ppuVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 *puVar2;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [23];
  undefined1 uStack_1a9;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_178;
  undefined1 auStack_138 [48];
  undefined8 uStack_108;
  
  func_0x006a3cdc();
  FUN_00532c74();
  func_0x006a3d08();
  func_0x006a3c84();
  func_0x006a3ffc();
  func_0x006a3ff4();
  func_0x006a3f40();
  func_0x006a3c9c(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x006a3d90();
    func_0x006a3f28();
    func_0x006a3cdc();
    func_0x006a3d08();
    func_0x006a3c84();
    func_0x006a3ffc();
    func_0x006a3ff4();
    func_0x006a3f40();
    func_0x006a3c9c(extraout_x8_00);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x006a3d90();
      func_0x006a3f28();
      func_0x006a3cdc();
      uStack_108 = extraout_x8_01;
      func_0x00667484(auStack_138);
      func_0x006a3d08();
      func_0x006a3c84();
      func_0x006a3ffc();
      func_0x006a3ff4();
      func_0x006a3f40();
      func_0x006a3c9c(uStack_108);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x006a3d90();
        func_0x006a3f28();
        func_0x006a3cdc();
        uStack_1d8 = 0;
        uStack_1d0 = 0;
        uStack_1c8 = 0;
        puVar2 = &uStack_1d8;
        uStack_178 = extraout_x8_02;
        FUN_0054ac10();
        ppuVar1 = &puStack_1a8;
        puStack_1a8 = puVar2;
        uStack_1a0 = param_2;
        FUN_0055d0c8(auStack_1c0);
        func_0x006a3f88(uStack_1a9);
        func_0x006a3ffc();
        func_0x006a3ff4();
        func_0x006a4140();
        func_0x006a3f80();
        func_0x006a3c9c(uStack_178);
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x006a4140();
        func_0x006a3f80();
        func_0x006a3f28();
        if ((long)*(char *)((long)ppuVar1 + 0x17) < 0) {
          puVar2 = (undefined8 *)((long)ppuVar1[1] + -1);
          ppuVar1[1] = puVar2;
          ppuVar1 = (undefined8 **)*ppuVar1;
        }
        else {
          puVar2 = (undefined8 *)((long)*(char *)((long)ppuVar1 + 0x17) + -1);
          *(byte *)((long)ppuVar1 + 0x17) = (byte)puVar2 & 0x7f;
        }
        *(undefined1 *)((long)ppuVar1 + (long)puVar2) = 0;
        return;
      }
    }
  }
  return;
}



/* Entry: 0069e630; end: 0069e697;  */

void FUN_0069e630(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 **ppuVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *puVar2;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [23];
  undefined1 uStack_139;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_108;
  undefined1 auStack_c8 [48];
  undefined8 uStack_98;
  
  func_0x006a3cdc();
  func_0x006a3d08();
  func_0x006a3c84();
  func_0x006a3ffc();
  func_0x006a3ff4();
  func_0x006a3f40();
  func_0x006a3c9c(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x006a3d90();
    func_0x006a3f28();
    func_0x006a3cdc();
    uStack_98 = extraout_x8_00;
    func_0x00667484(auStack_c8);
    func_0x006a3d08();
    func_0x006a3c84();
    func_0x006a3ffc();
    func_0x006a3ff4();
    func_0x006a3f40();
    func_0x006a3c9c(uStack_98);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x006a3d90();
      func_0x006a3f28();
      func_0x006a3cdc();
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_158 = 0;
      puVar2 = &uStack_168;
      uStack_108 = extraout_x8_01;
      FUN_0054ac10();
      ppuVar1 = &puStack_138;
      puStack_138 = puVar2;
      uStack_130 = param_2;
      FUN_0055d0c8(auStack_150);
      func_0x006a3f88(uStack_139);
      func_0x006a3ffc();
      func_0x006a3ff4();
      func_0x006a4140();
      func_0x006a3f80();
      func_0x006a3c9c(uStack_108);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x006a4140();
      func_0x006a3f80();
      func_0x006a3f28();
      if ((long)*(char *)((long)ppuVar1 + 0x17) < 0) {
        puVar2 = (undefined8 *)((long)ppuVar1[1] + -1);
        ppuVar1[1] = puVar2;
        ppuVar1 = (undefined8 **)*ppuVar1;
      }
      else {
        puVar2 = (undefined8 *)((long)*(char *)((long)ppuVar1 + 0x17) + -1);
        *(byte *)((long)ppuVar1 + 0x17) = (byte)puVar2 & 0x7f;
      }
      *(undefined1 *)((long)ppuVar1 + (long)puVar2) = 0;
      return;
    }
  }
  return;
}



/* Entry: 0069e698; end: 0069e6f7;  */

void FUN_0069e698(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 **ppuVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *puVar2;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [23];
  undefined1 uStack_c9;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_98;
  undefined1 auStack_58 [48];
  undefined8 uStack_28;
  
  func_0x006a3cdc();
  uStack_28 = extraout_x8;
  func_0x00667484(auStack_58);
  func_0x006a3d08();
  func_0x006a3c84();
  func_0x006a3ffc();
  func_0x006a3ff4();
  func_0x006a3f40();
  func_0x006a3c9c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x006a3d90();
  func_0x006a3f28();
  func_0x006a3cdc();
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  puVar2 = &uStack_f8;
  uStack_98 = extraout_x8_00;
  FUN_0054ac10();
  ppuVar1 = &puStack_c8;
  puStack_c8 = puVar2;
  uStack_c0 = param_2;
  FUN_0055d0c8(auStack_e0);
  func_0x006a3f88(uStack_c9);
  func_0x006a3ffc();
  func_0x006a3ff4();
  func_0x006a4140();
  func_0x006a3f80();
  func_0x006a3c9c(uStack_98);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x006a4140();
  func_0x006a3f80();
  func_0x006a3f28();
  if ((long)*(char *)((long)ppuVar1 + 0x17) < 0) {
    puVar2 = (undefined8 *)((long)ppuVar1[1] + -1);
    ppuVar1[1] = puVar2;
    ppuVar1 = (undefined8 **)*ppuVar1;
  }
  else {
    puVar2 = (undefined8 *)((long)*(char *)((long)ppuVar1 + 0x17) + -1);
    *(byte *)((long)ppuVar1 + 0x17) = (byte)puVar2 & 0x7f;
  }
  *(undefined1 *)((long)ppuVar1 + (long)puVar2) = 0;
  return;
}



/* Entry: 0069e6f8; end: 0069e78f;  */

void FUN_0069e6f8(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 **ppuVar1;
  undefined8 extraout_x8;
  undefined8 *puVar2;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [23];
  undefined1 uStack_59;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_28;
  
  func_0x006a3cdc();
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  puVar2 = &uStack_88;
  uStack_28 = extraout_x8;
  FUN_0054ac10();
  ppuVar1 = &puStack_58;
  puStack_58 = puVar2;
  uStack_50 = param_2;
  FUN_0055d0c8(auStack_70);
  func_0x006a3f88(uStack_59);
  func_0x006a3ffc();
  func_0x006a3ff4();
  func_0x006a4140();
  func_0x006a3f80();
  func_0x006a3c9c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x006a4140();
  func_0x006a3f80();
  func_0x006a3f28();
  if ((long)*(char *)((long)ppuVar1 + 0x17) < 0) {
    puVar2 = (undefined8 *)((long)ppuVar1[1] + -1);
    ppuVar1[1] = puVar2;
    ppuVar1 = (undefined8 **)*ppuVar1;
  }
  else {
    puVar2 = (undefined8 *)((long)*(char *)((long)ppuVar1 + 0x17) + -1);
    *(byte *)((long)ppuVar1 + 0x17) = (byte)puVar2 & 0x7f;
  }
  *(undefined1 *)((long)ppuVar1 + (long)puVar2) = 0;
  return;
}



/* Entry: 0069e790; end: 0069e7bf;  */

void FUN_0069e790(undefined8 *param_1)

{
  long lVar1;
  
  if ((long)*(char *)((long)param_1 + 0x17) < 0) {
    lVar1 = param_1[1] + -1;
    param_1[1] = lVar1;
    param_1 = (undefined8 *)*param_1;
  }
  else {
    lVar1 = (long)*(char *)((long)param_1 + 0x17) + -1;
    *(byte *)((long)param_1 + 0x17) = (byte)lVar1 & 0x7f;
  }
  *(undefined1 *)((long)param_1 + lVar1) = 0;
  return;
}



/* Entry: 0069e7c0; end: 0069e7d7;  */

undefined8 * FUN_0069e7c0(undefined8 *param_1)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  func_0x006a4260();
  func_0x006a4260();
  plVar3 = (long *)*param_1;
  *param_1 = 0;
  if (plVar3 != (long *)0x0) {
    lVar4 = plVar3[6];
    if (lVar4 != 0) {
      pcVar1 = (char *)plVar3[4];
      lVar2 = plVar3[5] + 8;
      for (; lVar4 != 0; lVar4 = lVar4 + -1) {
        if (-1 < *pcVar1) {
          FUN_0069e884(lVar2);
        }
        lVar2 = lVar2 + 0x20;
        pcVar1 = pcVar1 + 1;
      }
      __ZdlPv(plVar3[4] + -8);
    }
    lVar4 = plVar3[2];
    if (lVar4 != 0) {
      pcVar1 = (char *)*plVar3;
      lVar2 = plVar3[1] + 8;
      for (; lVar4 != 0; lVar4 = lVar4 + -1) {
        if (-1 < *pcVar1) {
          func_0x0069e8cc(lVar2);
        }
        lVar2 = lVar2 + 0x20;
        pcVar1 = pcVar1 + 1;
      }
      __ZdlPv(*plVar3 + -8);
    }
    __ZdlPv(plVar3);
  }
  return param_1;
}



/* Entry: 0069e7d8; end: 0069e883;  */

undefined8 * FUN_0069e7d8(undefined8 *param_1)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  *param_1 = 0;
  if (plVar3 != (long *)0x0) {
    lVar4 = plVar3[6];
    if (lVar4 != 0) {
      pcVar1 = (char *)plVar3[4];
      lVar2 = plVar3[5] + 8;
      for (; lVar4 != 0; lVar4 = lVar4 + -1) {
        if (-1 < *pcVar1) {
          FUN_0069e884(lVar2);
        }
        lVar2 = lVar2 + 0x20;
        pcVar1 = pcVar1 + 1;
      }
      __ZdlPv(plVar3[4] + -8);
    }
    lVar4 = plVar3[2];
    if (lVar4 != 0) {
      pcVar1 = (char *)*plVar3;
      lVar2 = plVar3[1] + 8;
      for (; lVar4 != 0; lVar4 = lVar4 + -1) {
        if (-1 < *pcVar1) {
          func_0x0069e8cc(lVar2);
        }
        lVar2 = lVar2 + 0x20;
        pcVar1 = pcVar1 + 1;
      }
      __ZdlPv(*plVar3 + -8);
    }
    __ZdlPv(plVar3);
  }
  return param_1;
}



/* Entry: 0069e884; end: 0069e8f7;  */

long * FUN_0069e884(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -8;
      FUN_0069e7d8();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 0069e8f8; end: 0069ea07;  */

undefined8 *
FUN_0069e8f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined8 param_13)

{
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_6;
  param_1[3] = &PTR_FUN_00a0fd90;
  param_1[4] = param_1;
  FUN_006ab73c(param_1 + 5,param_3);
  param_1[0x1b] = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_7;
  *(undefined1 *)((long)param_1 + 0xe4) = param_8;
  *(undefined1 *)((long)param_1 + 0xe5) = (undefined1)param_9;
  *(undefined1 *)((long)param_1 + 0xe6) = param_9._1_1_;
  *(undefined1 *)((long)param_1 + 0xe7) = param_9._2_1_;
  *(undefined1 *)(param_1 + 0x1d) = param_9._3_1_;
  *(undefined1 *)((long)param_1 + 0xe9) = param_10._1_1_;
  *(undefined4 *)((long)param_1 + 0xec) = param_11;
  *(undefined4 *)(param_1 + 0x1e) = param_11;
  *(undefined2 *)((long)param_1 + 0xf4) = 0;
  param_1[0x1f] = param_13;
  *(undefined1 *)((long)param_1 + 0xcc) = 1;
  *(undefined4 *)(param_1 + 0x1a) = 1;
  if ((char)param_10 != '\0') {
    *(undefined2 *)((long)param_1 + 0xd4) = 0x100;
  }
  FUN_006abef8(param_1 + 5);
  return param_1;
}



/* Entry: 0069ea08; end: 0069ea1f;  */

void FUN_0069ea08(void)

{
  return;
}



/* Entry: 0069ea20; end: 0069eb53;  */

void FUN_0069ea20(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long *plVar2;
  undefined1 auStack_50 [16];
  
  func_0x006a478c();
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006a4354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_3);
    return;
  }
  if ((int)param_2 < 0) {
    uVar1 = uRam0000000000b63da4 + 1;
    if ((uVar1 & uRam0000000000b63da4) != 0) {
      uRam0000000000b63da4 = uVar1;
      return;
    }
    uRam0000000000b63da4 = uVar1;
    func_0x006a42d8();
    FUN_00776698(auStack_50);
    func_0x006a4404();
    func_0x006a444c(*(undefined8 *)(param_1[0x1b] + 8));
    FUN_0069eb54();
    FUN_0069eb80();
    func_0x006a4590();
    func_0x006a407c();
  }
  else {
    uVar1 = uRam0000000000b63da0 + 1;
    if ((uVar1 & uRam0000000000b63da0) != 0) {
      uRam0000000000b63da0 = uVar1;
      return;
    }
    uRam0000000000b63da0 = uVar1;
    func_0x006a42d8();
    FUN_00776698(auStack_50);
    func_0x006a4404();
    func_0x006a444c(*(undefined8 *)(param_1[0x1b] + 8));
    func_0x006a4060();
    FUN_00537a7c();
    func_0x006a4628();
    FUN_00537a7c();
    FUN_0069eb54();
    FUN_0069eb80();
    func_0x006a4590();
    func_0x006a407c();
  }
  FUN_007766a8(auStack_50);
  return;
}



/* Entry: 0069eb54; end: 0069eb7f;  */

undefined8 FUN_0069eb54(undefined8 param_1)

{
  FUN_00554ab4(param_1,&UNK_00914ecd,6);
  return param_1;
}



/* Entry: 0069eb80; end: 0069eba3;  */

void FUN_0069eb80(undefined8 param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  FUN_005549ec(param_1,&uStack_14);
  return;
}



/* Entry: 0069eba4; end: 0069fbb3;  */

/* WARNING: Removing unreachable block (ram,0x0069edf0) */
/* WARNING: Removing unreachable block (ram,0x0069ee1c) */
/* WARNING: Removing unreachable block (ram,0x0069ee30) */
/* WARNING: Removing unreachable block (ram,0x0069ee34) */
/* WARNING: Removing unreachable block (ram,0x0069ee50) */
/* WARNING: Removing unreachable block (ram,0x0069ee54) */
/* WARNING: Removing unreachable block (ram,0x0069f5d0) */
/* WARNING: Removing unreachable block (ram,0x0069ee84) */
/* WARNING: Removing unreachable block (ram,0x0069ee9c) */
/* WARNING: Removing unreachable block (ram,0x0069eea0) */
/* WARNING: Removing unreachable block (ram,0x0069f5e8) */
/* WARNING: Removing unreachable block (ram,0x0069eeb0) */
/* WARNING: Removing unreachable block (ram,0x0069f5f8) */
/* WARNING: Removing unreachable block (ram,0x0069f6ac) */
/* WARNING: Removing unreachable block (ram,0x0069f6c4) */
/* WARNING: Removing unreachable block (ram,0x0069f6c8) */
/* WARNING: Removing unreachable block (ram,0x0069f700) */
/* WARNING: Removing unreachable block (ram,0x0069f600) */
/* WARNING: Removing unreachable block (ram,0x0069f740) */
/* WARNING: Removing unreachable block (ram,0x0069f638) */
/* WARNING: Removing unreachable block (ram,0x0069f658) */
/* WARNING: Removing unreachable block (ram,0x0069f684) */
/* WARNING: Removing unreachable block (ram,0x0069f68c) */
/* WARNING: Removing unreachable block (ram,0x0069f80c) */
/* WARNING: Removing unreachable block (ram,0x0069f828) */
/* WARNING: Removing unreachable block (ram,0x0069f868) */
/* WARNING: Removing unreachable block (ram,0x0069f86c) */
/* WARNING: Removing unreachable block (ram,0x0069f87c) */
/* WARNING: Removing unreachable block (ram,0x0069f698) */
/* WARNING: Removing unreachable block (ram,0x0069f880) */
/* WARNING: Removing unreachable block (ram,0x0069f88c) */
/* WARNING: Removing unreachable block (ram,0x0069f890) */
/* WARNING: Removing unreachable block (ram,0x0069f898) */
/* WARNING: Removing unreachable block (ram,0x0069f8a8) */
/* WARNING: Removing unreachable block (ram,0x0069f8b0) */
/* WARNING: Removing unreachable block (ram,0x0069f8c0) */
/* WARNING: Removing unreachable block (ram,0x0069f8cc) */
/* WARNING: Removing unreachable block (ram,0x0069f8d8) */
/* WARNING: Removing unreachable block (ram,0x0069f8ec) */
/* WARNING: Removing unreachable block (ram,0x0069f900) */
/* WARNING: Removing unreachable block (ram,0x0069f8f0) */
/* WARNING: Removing unreachable block (ram,0x0069f8f8) */

long **** FUN_0069eba4(undefined8 param_1,undefined8 param_2,uint param_3,long ****param_4,
                      long ****param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long **pplVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  bool bVar8;
  code *pcVar9;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar10;
  char cVar11;
  int iVar12;
  long ****pppplVar13;
  undefined8 uVar14;
  long ****pppplVar15;
  char *pcVar16;
  long ****pppplVar17;
  long lVar18;
  uint uVar19;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  long ****extraout_x8_04;
  undefined8 extraout_x8_05;
  long ****extraout_x8_06;
  long ****extraout_x8_07;
  long ****extraout_x8_08;
  long lVar20;
  long extraout_x8_09;
  long ****extraout_x8_10;
  long ****extraout_x8_11;
  long ****extraout_x8_12;
  ulong uVar21;
  undefined8 extraout_x9;
  long ****extraout_x9_00;
  long ****extraout_x9_01;
  long ****extraout_x9_02;
  long ****extraout_x9_03;
  long ****extraout_x9_04;
  long ****extraout_x9_05;
  undefined8 extraout_x10;
  long ****extraout_x10_00;
  long ****extraout_x10_01;
  long ****extraout_x10_02;
  long ****extraout_x10_03;
  long ****extraout_x10_04;
  long ****extraout_x10_05;
  long ****extraout_x10_06;
  long ****extraout_x10_07;
  long ****extraout_x10_08;
  long ****extraout_x10_09;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  long ****extraout_x11_02;
  undefined8 extraout_x11_03;
  long ****extraout_x11_04;
  long ****extraout_x11_05;
  long ****extraout_x11_06;
  long ****extraout_x11_07;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong uVar22;
  long ****extraout_x12_01;
  long ****extraout_x12_02;
  long ***extraout_x13;
  long ***ppplVar23;
  long ****extraout_x14;
  ulong unaff_x19;
  long **pplVar24;
  long *plVar25;
  uint unaff_w22;
  long ****pppplVar26;
  long **pplVar27;
  long *plVar28;
  undefined1 auStack_1f0 [48];
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  long **pplStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  uint auStack_198 [6];
  long **applStack_180 [3];
  long ***ppplStack_168;
  long ***ppplStack_160;
  long ***appplStack_138 [2];
  char cStack_121;
  long ***ppplStack_108;
  long ***ppplStack_100;
  undefined8 uStack_f8;
  long ***ppplStack_d8;
  long ***ppplStack_d0;
  long ***ppplStack_a8;
  long ***ppplStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_68;
  
  func_0x006a3cdc();
  uStack_68 = extraout_x8;
  func_0x006a4648();
  func_0x006a44ac();
  pplStack_1b0 = (long **)0x0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  plVar28 = *(long **)(unaff_x19 + 0x48);
  pppplVar13 = param_5;
  FUN_0065381c(param_5,auStack_1b8,auStack_1c0);
  iVar12 = (int)pppplVar13;
  if (iVar12 == 0) {
LAB_0069ec9c:
    func_0x006a4030();
    func_0x006a3e90();
    func_0x006a3ed4();
    if (unaff_w22 != 0) {
      uVar22 = unaff_x19;
      FUN_0069fcd8();
      if ((uVar22 & 1) != 0) {
        func_0x006a439c();
        func_0x006a4098();
        func_0x006a40ac();
        func_0x0069fbe8();
        func_0x006a3ed4();
        if ((unaff_w22 & 1) != 0) {
          func_0x006a40f0();
          pppplVar13 = *(long *****)(unaff_x19 + 8);
          if (pppplVar13 == (long ****)0x0) {
            func_0x006a44ac();
            pppplVar17 = (long ****)pppplVar13[2][3];
            func_0x006a3cb0();
            FUN_00655f48();
          }
          else {
            func_0x006a42e4();
            (*extraout_x8_00)();
            pppplVar17 = pppplVar13;
            pppplVar13 = param_5;
          }
          pppplVar26 = pppplVar17;
          if (pppplVar17 != (long ****)0x0) goto LAB_0069f048;
          if (((*(byte *)(unaff_x19 + 0xe5) & 1) != 0) || ((*(byte *)(unaff_x19 + 0xe6) & 1) != 0))
          {
            pppplVar17 = (long ****)&UNK_00914f73;
            FUN_00532c74();
            ppplStack_a8 = (long ***)pppplVar17;
            ppplStack_a0 = (long ***)pppplVar13;
            func_0x006a3cb0();
            ppplStack_d0 = (long ***)extraout_x11_02;
            ppplStack_d8 = (long ***)extraout_x10_02;
            if (in_NG == in_OV) {
              ppplStack_d0 = (long ***)extraout_x8_04;
              ppplStack_d8 = (long ***)extraout_x9_01;
            }
            pppplVar17 = (long ****)&UNK_00914f88;
            FUN_00532c74();
            ppplStack_108 = (long ***)pppplVar17;
            ppplStack_100 = (long ***)pppplVar13;
            func_0x006a3cf0();
            func_0x006a3e84();
            ppplStack_168 = (long ***)pppplVar17;
            ppplStack_160 = (long ***)pppplVar13;
            func_0x006a3d3c();
            FUN_0054dd58();
            func_0x006a3e04();
            func_0x006a441c();
LAB_0069f444:
            pppplVar15 = (long ****)applStack_180;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            bVar8 = false;
            goto LAB_0069f450;
          }
          pppplVar17 = (long ****)&UNK_00914f3a;
          FUN_00532c74();
          ppplStack_a8 = (long ***)pppplVar17;
          ppplStack_a0 = (long ***)pppplVar13;
          func_0x006a3cb0();
          ppplStack_d0 = (long ***)extraout_x11_07;
          ppplStack_d8 = (long ***)extraout_x10_09;
          if (in_NG == in_OV) {
            ppplStack_d0 = (long ***)extraout_x8_12;
            ppplStack_d8 = (long ***)extraout_x9_05;
          }
          pppplVar17 = (long ****)&UNK_00914f46;
          FUN_00532c74();
          ppplStack_108 = (long ***)pppplVar17;
          ppplStack_100 = (long ***)pppplVar13;
          func_0x006a3cf0();
          func_0x006a3e84();
          ppplStack_168 = (long ***)pppplVar17;
          ppplStack_160 = (long ***)pppplVar13;
          func_0x006a3d3c();
          FUN_0054dd58();
          func_0x006a3e04();
          func_0x006a3f94();
LAB_0069f590:
          pppplVar13 = (long ****)applStack_180;
LAB_0069f594:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppplVar13);
        }
      }
      goto LAB_0069f598;
    }
    uVar22 = unaff_x19;
    FUN_0069fdec();
    if ((int)uVar22 == 0) goto LAB_0069f598;
    func_0x006a40f0();
    uVar19 = (uint)*(byte *)(unaff_x19 + 0xe8);
    cVar10 = SBORROW4(uVar19,1);
    cVar11 = (int)(uVar19 - 1) < 0;
    in_ZR = uVar19 == 1;
    pppplVar17 = param_4;
    if ((bool)in_ZR) {
      func_0x006a3cb0();
      uVar2 = extraout_x11;
      uVar14 = extraout_x10;
      if (cVar11 == cVar10) {
        uVar2 = extraout_x8_01;
        uVar14 = extraout_x9;
      }
      func_0x005baa10(uVar14,uVar2,auStack_198);
      if ((int)uVar14 == 0) goto LAB_0069ed5c;
      pppplVar13 = param_4;
      FUN_00693780(param_4,auStack_198[0]);
      if ((int)pppplVar13 != 0) {
        pppplVar17 = *(long *****)(unaff_x19 + 8);
        pppplVar13 = (long ****)(ulong)auStack_198[0];
        if (pppplVar17 == (long ****)0x0) {
          pppplVar17 = param_4;
          func_0x0069c118();
        }
        else {
          pppplVar13 = param_4;
          (*(code *)(*pppplVar17)[3])();
        }
LAB_0069f040:
        pppplVar15 = (long ****)0x0;
        pppplVar26 = pppplVar17;
        if (pppplVar17 == (long ****)0x0) {
LAB_0069f3ec:
          if ((*(byte *)(unaff_x19 + 0xe5) & 1) != 0) {
            func_0x006a45b8();
            ppplStack_a8 = (long ***)pppplVar15;
            ppplStack_a0 = (long ***)pppplVar13;
            func_0x006a3cf0();
            ppplStack_d0 = (long ***)extraout_x12_01;
            if (cVar11 == cVar10) {
              ppplStack_d0 = (long ***)extraout_x10_07;
            }
            ppplStack_d8 = (long ***)extraout_x8_10;
            func_0x006a45a4();
            ppplStack_108 = (long ***)pppplVar15;
            ppplStack_100 = (long ***)pppplVar13;
            func_0x006a3cb0();
            func_0x006a3e84();
            ppplStack_168 = (long ***)pppplVar15;
            ppplStack_160 = (long ***)pppplVar13;
            func_0x006a3d3c();
            FUN_0054dd58();
            func_0x006a3e04();
            func_0x006a441c();
            goto LAB_0069f444;
          }
          func_0x006a45b8();
          ppplStack_a8 = (long ***)pppplVar15;
          ppplStack_a0 = (long ***)pppplVar13;
          func_0x006a3cf0();
          ppplStack_d0 = (long ***)extraout_x12_02;
          if (cVar11 == cVar10) {
            ppplStack_d0 = (long ***)extraout_x10_08;
          }
          ppplStack_d8 = (long ***)extraout_x8_11;
          func_0x006a45a4();
          ppplStack_108 = (long ***)pppplVar15;
          ppplStack_100 = (long ***)pppplVar13;
          func_0x006a3cb0();
          func_0x006a3e84();
          ppplStack_168 = (long ***)pppplVar15;
          ppplStack_160 = (long ***)pppplVar13;
          func_0x006a3d3c();
          FUN_0054dd58();
          func_0x006a3e04();
          func_0x006a3f94();
          goto LAB_0069f590;
        }
        goto LAB_0069f048;
      }
      pppplVar13 = (long ****)(ulong)auStack_198[0];
      pppplVar15 = param_4;
      func_0x00656734(param_4,pppplVar13);
      if (pppplVar15 == (long ****)0x0) {
        FUN_00656068();
        goto LAB_0069f040;
      }
LAB_0069f02c:
      bVar8 = true;
LAB_0069f450:
      if (((*(byte *)(unaff_x19 + 0xe5) & 1) != 0) ||
         (bVar8 || (*(byte *)(unaff_x19 + 0xe6) & 1) != 0)) {
        func_0x006a3ef0();
        func_0x006a40ac();
        FUN_0069fca8();
        pppplVar13 = pppplVar15;
        func_0x006a3f9c();
        if ((int)pppplVar15 != 0) {
          func_0x006a40f0();
          func_0x006a4098();
          pppplVar13 = (long ****)(unaff_x19 + 0x30);
          FUN_00459c38(pppplVar13,&ppplStack_a8);
          if (((ulong)pppplVar13 & 1) == 0) {
            FUN_00425cb4(&ppplStack_d8,"<");
            pppplVar17 = (long ****)(unaff_x19 + 0x30);
            FUN_00459c38(pppplVar17,&ppplStack_d8);
            pppplVar13 = pppplVar17;
            func_0x006a4620();
            func_0x006a3f9c();
            if (((ulong)pppplVar17 & 1) == 0) {
              func_0x006a45ec();
              goto LAB_0069f59c;
            }
          }
          else {
            func_0x006a3f9c();
          }
        }
        func_0x006a4414();
        goto LAB_0069f59c;
      }
      func_0x006a42d8();
      FUN_00776794(&ppplStack_a8);
      FUN_005558a0();
      goto LAB_0069f980;
    }
LAB_0069ed5c:
    func_0x006a3cb0();
    uVar2 = extraout_x11_00;
    pppplVar13 = extraout_x10_00;
    if (cVar11 == cVar10) {
      uVar2 = extraout_x8_02;
      pppplVar13 = extraout_x9_00;
    }
    FUN_00656228(param_4,pppplVar13,uVar2);
    pppplVar26 = pppplVar17;
    if (pppplVar17 == (long ****)0x0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&ppplStack_a8,&pplStack_1b0);
      func_0x00570864();
      func_0x006a42c4();
      uVar2 = extraout_x11_01;
      pppplVar13 = extraout_x10_01;
      if (cVar11 == cVar10) {
        uVar2 = extraout_x8_03;
        pppplVar13 = &ppplStack_a8;
      }
      pppplVar26 = param_4;
      FUN_00656228(param_4,pppplVar13,uVar2);
      pppplVar17 = pppplVar26;
      if (pppplVar26 != (long ****)0x0) {
        FUN_0066586c();
        if (((ulong)pppplVar17 & 1) == 0) {
          pppplVar26 = (long ****)0x0;
        }
        else {
          pppplVar13 = pppplVar26;
          FUN_00656024();
          pppplVar17 = (long ****)pppplVar13[1];
          pppplVar13 = (long ****)&pplStack_1b0;
          FUN_00459c38();
          if ((int)pppplVar17 == 0) {
            pppplVar26 = (long ****)0x0;
          }
        }
      }
      func_0x006a3f9c();
      if (pppplVar26 == (long ****)0x0) {
        uVar19 = (uint)*(byte *)(unaff_x19 + 0xe4);
        cVar10 = SBORROW4(uVar19,1);
        cVar11 = (int)(uVar19 - 1) < 0;
        pppplVar15 = pppplVar17;
        if (uVar19 == 1) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
          func_0x00570864();
          func_0x006a42c4();
          uVar2 = extraout_x11_03;
          pppplVar13 = extraout_x10_03;
          if (cVar11 == cVar10) {
            uVar2 = extraout_x8_05;
            pppplVar13 = &ppplStack_a8;
          }
          pppplVar26 = param_4;
          FUN_00656184(param_4,pppplVar13,uVar2);
          pppplVar17 = pppplVar26;
          func_0x006a3f9c();
          pppplVar15 = pppplVar17;
          if (pppplVar26 != (long ****)0x0) goto LAB_0069f048;
        }
        lVar20 = 0;
        func_0x006a3cb0();
        do {
          lVar18 = (long)*(int *)((long)param_4 + 0x94);
          cVar10 = SBORROW8(lVar20,lVar18);
          cVar11 = lVar20 - lVar18 < 0;
          in_ZR = lVar20 == lVar18;
          if (lVar18 <= lVar20) goto LAB_0069f3ec;
          func_0x006a47b8();
          func_0x00465a14();
          lVar20 = lVar20 + 1;
        } while (((ulong)pppplVar15 & 1) == 0);
        goto LAB_0069f02c;
      }
    }
LAB_0069f048:
    uVar19 = (uint)*(byte *)((long)pppplVar26[7] + 0x8b);
    cVar10 = SBORROW4(uVar19,1);
    cVar11 = (int)(uVar19 - 1) < 0;
    if (uVar19 == 1) {
      pppplVar17 = (long ****)&UNK_00915026;
      FUN_00532c74();
      ppplStack_a8 = (long ***)pppplVar17;
      ppplStack_a0 = (long ***)pppplVar13;
      func_0x006a3cb0();
      ppplStack_d0 = (long ***)extraout_x11_04;
      ppplStack_d8 = (long ***)extraout_x10_04;
      if (cVar11 == cVar10) {
        ppplStack_d0 = (long ***)extraout_x8_06;
        ppplStack_d8 = (long ***)extraout_x9_02;
      }
      pcVar16 = "\"";
      FUN_00532c74();
      param_4 = appplStack_138;
      ppplStack_108 = (long ***)pcVar16;
      ppplStack_100 = (long ***)pppplVar13;
      func_0x006a3ec4(appplStack_138);
      FUN_00575ddc();
      pppplVar13 = (long ****)appplStack_138[0];
      if (-1 < cStack_121) {
        pppplVar13 = param_4;
      }
      func_0x006a441c();
      pppplVar17 = appplStack_138;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
    iVar12 = *(int *)(unaff_x19 + 0xe0);
    cVar10 = SBORROW4(iVar12,1);
    cVar11 = iVar12 + -1 < 0;
    in_ZR = iVar12 == 1;
    if ((bool)in_ZR) {
      bVar7 = *(byte *)((long)pppplVar26 + 1);
      if ((bVar7 >> 5 & 1) == 0) {
        func_0x006a4194();
        FUN_0068ae9c();
        if (((ulong)pppplVar17 & 1) == 0) {
          bVar7 = *(byte *)((long)pppplVar26 + 1);
          goto LAB_0069f144;
        }
        pppplVar17 = (long ****)&UNK_0091504e;
        FUN_00532c74();
        ppplStack_a8 = (long ***)pppplVar17;
        ppplStack_a0 = (long ***)pppplVar13;
        func_0x006a3cb0();
        ppplStack_d0 = (long ***)extraout_x11_05;
        ppplStack_d8 = (long ***)extraout_x10_05;
        if (cVar11 == cVar10) {
          ppplStack_d0 = (long ***)extraout_x8_07;
          ppplStack_d8 = (long ***)extraout_x9_03;
        }
        pppplVar17 = (long ****)&UNK_00915063;
        FUN_00532c74();
        ppplStack_108 = (long ***)pppplVar17;
        ppplStack_100 = (long ***)pppplVar13;
        func_0x006a3ec4(appplStack_138);
        FUN_00575ddc();
        func_0x006a3f88(cStack_121);
        func_0x006a3f94();
        pppplVar13 = appplStack_138;
        goto LAB_0069f594;
      }
LAB_0069f144:
      if (((bVar7 >> 4 & 1) != 0) && (param_4 = (long ****)pppplVar26[5], param_4 != (long ****)0x0)
         ) {
        func_0x006a4194();
        FUN_0068ed64();
        if ((int)pppplVar17 != 0) {
          func_0x006a4194();
          FUN_0068e804();
          pppplVar17 = (long ****)&UNK_00915082;
          FUN_00532c74();
          ppplStack_a8 = (long ***)pppplVar17;
          ppplStack_a0 = (long ***)pppplVar13;
          func_0x006a3cb0();
          ppplStack_d0 = (long ***)extraout_x11_06;
          ppplStack_d8 = (long ***)extraout_x10_06;
          if (cVar11 == cVar10) {
            ppplStack_d0 = (long ***)extraout_x8_08;
            ppplStack_d8 = (long ***)extraout_x9_04;
          }
          pppplVar17 = (long ****)&UNK_0091508a;
          FUN_00532c74();
          ppplStack_108 = (long ***)pppplVar17;
          ppplStack_100 = (long ***)pppplVar13;
          func_0x006a3e68();
          pppplVar17 = (long ****)&UNK_009150ac;
          FUN_00532c74();
          ppplStack_168 = (long ***)pppplVar17;
          ppplStack_160 = (long ***)pppplVar13;
          func_0x006a3d3c();
          FUN_00671ba0();
          func_0x006a3e04();
          func_0x006a3f94();
          goto LAB_0069f590;
        }
      }
    }
    func_0x006a454c();
    in_ZR = (int)pppplVar17 == 10;
    if ((bool)in_ZR) {
      func_0x006a3ef0();
      func_0x006a40ac();
      FUN_0069fca8();
      func_0x006a3f48();
      if ((int)param_4 == 0) goto LAB_0069f26c;
      func_0x006a40f0();
      in_ZR = *(char *)((long)pppplVar26[7] + 0x8c) == '\x01';
      if ((!(bool)in_ZR) || (in_ZR = *(int *)(unaff_x19 + 0x28) == 5, !(bool)in_ZR))
      goto LAB_0069f26c;
      ppplStack_a8 = (long ***)0x0;
      ppplStack_a0 = (long ***)0x0;
      uStack_98 = 0;
      func_0x006a40ac();
      FUN_006a04c8();
      if (((ulong)pppplVar17 & 1) == 0) {
        pppplVar13 = &ppplStack_a8;
        goto LAB_0069f594;
      }
      pppplVar17 = *(long *****)(unaff_x19 + 8);
      if (pppplVar17 != (long ****)0x0) {
        (*(code *)(*pppplVar17)[5])(pppplVar17,pppplVar26);
      }
      func_0x006a4194();
      FUN_0068dd94();
      func_0x006a42c4();
      FUN_00549e14();
      func_0x006a3f9c();
    }
    else {
      func_0x006a3ef0();
      func_0x006a40ac();
      func_0x0069fbe8();
      func_0x006a3f48();
      if (((ulong)param_4 & 1) == 0) goto LAB_0069f598;
      func_0x006a40f0();
LAB_0069f26c:
      if ((*(byte *)((long)pppplVar26 + 1) >> 5 & 1) != 0) {
        func_0x006a4030();
        func_0x006a3e90();
        func_0x006a3f48();
        if ((int)param_4 != 0) {
          func_0x006a41ac();
          func_0x006a3e90();
          func_0x006a3f48();
          pppplVar13 = pppplVar17;
          if (((ulong)param_4 & 1) == 0) {
            do {
              func_0x006a454c();
              iVar12 = (int)pppplVar13;
              in_ZR = iVar12 == 10;
              if ((bool)in_ZR) {
                func_0x006a3fe0();
                FUN_006a059c();
                if (((ulong)pppplVar13 & 1) == 0) break;
              }
              else {
                func_0x006a3fe0();
                FUN_006a08f8();
                if (iVar12 == 0) break;
              }
              pppplVar13 = &ppplStack_a8;
              func_0x006a4464();
              func_0x006a3e90();
              pppplVar17 = pppplVar13;
              func_0x006a3f9c();
              if (((ulong)pppplVar13 & 1) != 0) goto LAB_0069f32c;
              FUN_00425cb4();
              func_0x006a40ac();
              FUN_006a1354();
              pppplVar13 = pppplVar17;
              func_0x006a3f9c();
            } while (((ulong)pppplVar17 & 1) != 0);
            goto LAB_0069f598;
          }
          goto LAB_0069f32c;
        }
      }
      func_0x006a454c();
      in_ZR = (int)pppplVar17 == 10;
      if ((bool)in_ZR) {
        func_0x006a3fe0();
        FUN_006a059c();
        if (((ulong)pppplVar17 & 1) == 0) {
LAB_0069f598:
          pppplVar13 = (long ****)0x0;
          goto LAB_0069f59c;
        }
      }
      else {
        func_0x006a3fe0();
        FUN_006a08f8();
        if ((int)pppplVar17 == 0) goto LAB_0069f598;
      }
    }
LAB_0069f32c:
    func_0x006a4098();
    func_0x006a3e90();
    if (((ulong)pppplVar17 & 1) == 0) {
      FUN_00425cb4(&ppplStack_d8,",");
      func_0x006a3fb4();
      func_0x006a4620();
    }
    func_0x006a3f9c();
    pppplVar13 = *(long *****)(unaff_x19 + 0x10);
    if (pppplVar13 == (long ****)0x0) {
LAB_0069f804:
      pppplVar13 = (long ****)((long)&MACH_HEADER.magic + 1);
      goto LAB_0069f59c;
    }
    uVar5 = *(undefined4 *)(unaff_x19 + 0x78);
    uVar6 = *(undefined4 *)(unaff_x19 + 0x80);
    Hint_Prefetch(*pppplVar13,0,2,0);
    pppplVar17 = pppplVar26;
    FUN_006a2340(*pppplVar13);
    lVar20 = 0;
    plVar25 = (long *)CONCAT44(uVar6,uVar5);
    while( true ) {
      func_0x006a4520(lVar20);
      uVar22 = extraout_x12;
      while (uVar22 != 0) {
        func_0x006a4744();
        ppplVar23 = extraout_x13;
        if (extraout_x14 == pppplVar26) goto LAB_0069f764;
        uVar22 = extraout_x12_00 - 1 & extraout_x12_00;
      }
      func_0x006a4538();
      if ((param_3 & 1) != 0) break;
      lVar20 = extraout_x8_09 + 8;
    }
    pppplVar17 = pppplVar13;
    FUN_006a2f00();
    ppplVar23 = pppplVar13[1] + (long)pppplVar17 * 4;
    *ppplVar23 = (long **)pppplVar26;
    ppplVar23[1] = (long **)0x0;
    ppplVar23[2] = (long **)0x0;
    ppplVar23[3] = (long **)0x0;
    ppplVar23 = pppplVar13[1];
LAB_0069f764:
    pplVar27 = ppplVar23[(long)pppplVar17 * 4 + 2];
    pplVar4 = ppplVar23[(long)pppplVar17 * 4 + 3];
    in_ZR = pplVar27 == pplVar4;
    if (pplVar27 < pplVar4) {
      *pplVar27 = plVar28;
      pplVar27[1] = plVar25;
      pplVar27 = pplVar27 + 2;
LAB_0069f800:
      ppplVar23[(long)pppplVar17 * 4 + 2] = pplVar27;
      goto LAB_0069f804;
    }
    pplVar24 = ppplVar23[(long)pppplVar17 * 4 + 1];
    lVar20 = (long)pplVar27 - (long)pplVar24;
    uVar22 = (lVar20 >> 4) + 1;
    if (uVar22 >> 0x3c == 0) {
      uVar21 = (long)pplVar4 - (long)pplVar24;
      uVar3 = (long)uVar21 >> 3;
      if ((ulong)((long)uVar21 >> 3) <= uVar22) {
        uVar3 = uVar22;
      }
      in_ZR = uVar21 == 0x7ffffffffffffff0;
      if (0x7fffffffffffffef < uVar21) {
        uVar3 = 0xfffffffffffffff;
      }
      if (uVar3 >> 0x3c != 0) {
        FUN_0040cee8();
        goto LAB_0069f990;
      }
      lVar18 = uVar3 << 4;
      __Znwm();
      puVar1 = (undefined8 *)(lVar18 + lVar20);
      *puVar1 = plVar28;
      puVar1[1] = plVar25;
      pplVar27 = (long **)(puVar1 + 2);
      _memcpy(puVar1 + (lVar20 >> 4) * -2,pplVar24,lVar20);
      ppplVar23[(long)pppplVar17 * 4 + 1] = (long **)(puVar1 + (lVar20 >> 4) * -2);
      ppplVar23[(long)pppplVar17 * 4 + 2] = pplVar27;
      ppplVar23[(long)pppplVar17 * 4 + 3] = (long **)(lVar18 + uVar3 * 0x10);
      if (pplVar24 != (long **)0x0) {
        __ZdlPv(pplVar24);
      }
      goto LAB_0069f800;
    }
  }
  else {
    func_0x006a4030();
    func_0x006a3e90();
    func_0x006a3ed4();
    if (unaff_w22 == 0) goto LAB_0069ec9c;
    func_0x006a4778();
    func_0x006a41b8();
    if (iVar12 != 0) {
      while( true ) {
        uVar22 = 0;
        func_0x006a442c();
        func_0x006a3e90();
        func_0x006a3f48();
        if ((int)param_4 == 0) break;
        ppplStack_108 = (long ***)0x0;
        ppplStack_100 = (long ***)0x0;
        uStack_f8 = 0;
        pppplVar13 = &ppplStack_108;
        func_0x006a41b8();
        if ((uVar22 & 1) == 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppplStack_108);
          goto LAB_0069eed4;
        }
        pppplVar17 = (long ****)".";
        FUN_00532c74();
        in_ZR = uStack_f8._7_1_ == 0;
        ppplStack_d0 = ppplStack_100;
        ppplStack_d8 = ppplStack_108;
        if (-1 < uStack_f8) {
          ppplStack_d0 = (long ***)(ulong)uStack_f8._7_1_;
          ppplStack_d8 = (long ***)&ppplStack_108;
        }
        ppplStack_a8 = (long ***)pppplVar17;
        ppplStack_a0 = (long ***)pppplVar13;
        FUN_005761b0(auStack_1f0,&ppplStack_a8,&ppplStack_d8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppplStack_108);
      }
      FUN_00425cb4();
      func_0x006a40ac();
      FUN_006a1354();
      func_0x006a3ed4();
    }
LAB_0069eed4:
    pppplVar13 = (long ****)0x0;
    func_0x006a4334();
    func_0x006a426c();
LAB_0069f59c:
    func_0x006a4100();
    func_0x006a3c9c(uStack_68);
    if ((bool)in_ZR) {
      return pppplVar13;
    }
LAB_0069f980:
    ___stack_chk_fail();
  }
  FUN_0069e7c0();
LAB_0069f990:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x69f994);
  (*pcVar9)();
}



/* Entry: 0069fbb4; end: 0069fc07;  */

long FUN_0069fbb4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  FUN_00459c38();
  if ((int)lVar1 != 0) {
    FUN_006abef8(param_1 + 0x28);
  }
  return lVar1;
}



/* Entry: 0069fc08; end: 0069fca7;  */

void FUN_0069fc08(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined1 auStack_b0 [24];
  undefined *puStack_98;
  undefined8 uStack_90;
  char *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_38;
  
  func_0x006a3d70();
  *(undefined1 *)(param_1 + 0xf4) = 0;
  uVar1 = *(int *)(param_1 + 0x28) == 7;
  uStack_38 = extraout_x8;
  if ((bool)uVar1) {
    pcVar2 = " ";
    FUN_00532c74();
    puVar3 = &UNK_00827db6;
    pcStack_68 = pcVar2;
    uStack_60 = param_2;
    FUN_00532c74();
    puStack_98 = puVar3;
    uStack_90 = param_2;
    func_0x006a4020();
    lVar4 = param_1 + 0x30;
    FUN_00459c38(lVar4,auStack_b0);
    func_0x006a3f40();
    if ((int)lVar4 != 0) {
      *(undefined1 *)(param_1 + 0xf4) = 1;
    }
    func_0x006a4494();
    unaff_x19 = param_1;
  }
  func_0x006a3c9c(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x006a44f4();
  FUN_0069fbb4();
  *(undefined2 *)(unaff_x19 + 0xd6) = 0;
  return;
}



/* Entry: 0069fca8; end: 0069fcc7;  */

void FUN_0069fca8(void)

{
  long unaff_x19;
  
  func_0x006a44f4();
  FUN_0069fbb4();
  *(undefined2 *)(unaff_x19 + 0xd6) = 0;
  return;
}



/* Entry: 0069fcc8; end: 0069fcd7;  */

void FUN_0069fcc8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_50 [16];
  
  uVar2 = (ulong)*(uint *)(param_1 + 9);
  uVar3 = (ulong)*(uint *)((long)param_1 + 0x4c);
  func_0x006a478c(param_1,uVar2,uVar3,param_2,param_3);
  *(undefined1 *)((long)param_1 + 0xf5) = 1;
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006a4354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,uVar2,uVar3);
    return;
  }
  func_0x006a42d8();
  if ((int)uVar2 < 0) {
    func_0x007766a0(auStack_50);
    func_0x006a4454();
    func_0x006a444c(*(undefined8 *)(param_1[0x1b] + 8));
    func_0x006a4060();
    func_0x006a407c();
  }
  else {
    func_0x007766a0(auStack_50);
    func_0x006a4454();
    func_0x006a444c(*(undefined8 *)(param_1[0x1b] + 8));
    func_0x006a4060();
    FUN_00537a7c();
    func_0x006a4628();
    FUN_00537a7c();
    func_0x006a4060();
    func_0x006a407c();
  }
  FUN_007766a8(auStack_50);
  return;
}



/* Entry: 0069fcd8; end: 0069fddb;  */

void FUN_0069fcd8(long *param_1)

{
  uint uVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  undefined1 *extraout_x10;
  ulong unaff_x20;
  undefined1 auStack_110 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_48;
  
  func_0x006a43a8();
  func_0x006a3d70();
  uStack_48 = extraout_x8;
  FUN_006a1470();
  if ((int)param_1 != 0) {
    while( true ) {
      func_0x006a467c(&pcStack_78);
      iVar2 = (int)unaff_x20;
      FUN_0069fbb4();
      func_0x006a4570();
      if (iVar2 == 0) break;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uVar4 = unaff_x20;
      puVar6 = &uStack_c0;
      FUN_006a1470();
      if ((uVar4 & 1) == 0) {
        func_0x006a3f40();
        param_1 = (long *)0x0;
        goto LAB_0069fd8c;
      }
      pcVar5 = ".";
      FUN_00532c74();
      pcStack_78 = pcVar5;
      puStack_70 = (undefined1 *)puVar6;
      func_0x006a3cc8();
      puStack_a8 = extraout_x10;
      if (in_NG == in_OV) {
        puStack_a8 = (undefined1 *)&uStack_c0;
      }
      FUN_005761b0();
      func_0x006a3f40();
    }
    param_1 = (long *)((long)&MACH_HEADER.magic + 1);
  }
LAB_0069fd8c:
  func_0x006a3c9c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x006a4008();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x006a3f28();
  uVar4 = (ulong)*(uint *)(param_1 + 9);
  uVar7 = (ulong)*(uint *)((long)param_1 + 0x4c);
  func_0x006a478c();
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    if ((int)uVar4 < 0) {
      uVar1 = uRam0000000000b63da4 + 1;
      if ((uVar1 & uRam0000000000b63da4) != 0) {
        uRam0000000000b63da4 = uVar1;
        return;
      }
      uRam0000000000b63da4 = uVar1;
      func_0x006a42d8();
      FUN_00776698(auStack_110);
      func_0x006a4404();
      func_0x006a444c(*(undefined8 *)(param_1[0x1b] + 8));
      FUN_0069eb54();
      FUN_0069eb80();
      func_0x006a4590();
      func_0x006a407c();
    }
    else {
      uVar1 = uRam0000000000b63da0 + 1;
      if ((uVar1 & uRam0000000000b63da0) != 0) {
        uRam0000000000b63da0 = uVar1;
        return;
      }
      uRam0000000000b63da0 = uVar1;
      func_0x006a42d8();
      FUN_00776698(auStack_110);
      func_0x006a4404();
      func_0x006a444c(*(undefined8 *)(param_1[0x1b] + 8));
      func_0x006a4060();
      FUN_00537a7c();
      func_0x006a4628();
      FUN_00537a7c();
      FUN_0069eb54();
      FUN_0069eb80();
      func_0x006a4590();
      func_0x006a407c();
    }
    FUN_007766a8(auStack_110);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006a4354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3,uVar4,uVar7);
  return;
}



/* Entry: 0069fddc; end: 0069fdeb;  */

void FUN_0069fddc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_50 [16];
  
  uVar3 = (ulong)*(uint *)(param_1 + 9);
  uVar4 = (ulong)*(uint *)((long)param_1 + 0x4c);
  func_0x006a478c(param_1,uVar3,uVar4,param_2,param_3);
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006a4354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,uVar3,uVar4);
    return;
  }
  if ((int)uVar3 < 0) {
    uVar1 = uRam0000000000b63da4 + 1;
    if ((uVar1 & uRam0000000000b63da4) != 0) {
      uRam0000000000b63da4 = uVar1;
      return;
    }
    uRam0000000000b63da4 = uVar1;
    func_0x006a42d8();
    FUN_00776698(auStack_50);
    func_0x006a4404();
    func_0x006a444c(*(undefined8 *)(param_1[0x1b] + 8));
    FUN_0069eb54();
    FUN_0069eb80();
    func_0x006a4590();
    func_0x006a407c();
  }
  else {
    uVar1 = uRam0000000000b63da0 + 1;
    if ((uVar1 & uRam0000000000b63da0) != 0) {
      uRam0000000000b63da0 = uVar1;
      return;
    }
    uRam0000000000b63da0 = uVar1;
    func_0x006a42d8();
    FUN_00776698(auStack_50);
    func_0x006a4404();
    func_0x006a444c(*(undefined8 *)(param_1[0x1b] + 8));
    func_0x006a4060();
    FUN_00537a7c();
    func_0x006a4628();
    FUN_00537a7c();
    FUN_0069eb54();
    FUN_0069eb80();
    func_0x006a4590();
    func_0x006a407c();
  }
  FUN_007766a8(auStack_50);
  return;
}



/* Entry: 0069fdec; end: 0069fe0b;  */

void FUN_0069fdec(void)

{
  long unaff_x19;
  
  func_0x006a44f4();
  FUN_006a1470();
  *(undefined2 *)(unaff_x19 + 0xd6) = 0;
  return;
}



/* Entry: 0069fe0c; end: 006a011f;  */

qword * FUN_0069fe0c(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 *****param_4,
                    undefined8 ******param_5,undefined1 *param_6,qword *param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  byte bVar5;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined1 uVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  undefined8 ******ppppppuVar10;
  undefined8 ******ppppppuVar11;
  qword *pqVar12;
  qword **ppqVar13;
  undefined *puVar14;
  qword *pqVar15;
  qword *pqVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined *puVar19;
  undefined1 *puVar20;
  char *pcVar21;
  int iVar22;
  undefined8 extraout_x8;
  undefined1 *extraout_x8_00;
  undefined1 *extraout_x8_01;
  undefined1 *extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined1 *extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined1 *extraout_x8_06;
  undefined8 extraout_x8_07;
  long lVar23;
  long extraout_x8_08;
  undefined1 *extraout_x8_09;
  long extraout_x8_10;
  ulong uVar24;
  undefined8 extraout_x8_11;
  long extraout_x8_12;
  undefined8 extraout_x8_13;
  undefined8 extraout_x8_14;
  undefined8 extraout_x8_15;
  undefined8 extraout_x9;
  undefined8 ******extraout_x10;
  undefined8 ******extraout_x10_00;
  undefined8 ******extraout_x10_01;
  qword *extraout_x10_02;
  undefined1 *extraout_x11;
  undefined1 *extraout_x11_00;
  undefined1 *extraout_x11_01;
  undefined1 *extraout_x11_02;
  undefined1 *extraout_x11_03;
  undefined1 *extraout_x11_04;
  undefined8 extraout_x11_05;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong uVar25;
  undefined8 *****extraout_x13;
  undefined8 *****pppppuVar26;
  undefined8 ******extraout_x14;
  qword *unaff_x19;
  qword *pqVar27;
  char *unaff_x20;
  int *piVar28;
  char *unaff_x21;
  undefined8 *****pppppuVar29;
  char *unaff_x22;
  char *unaff_x23;
  char *unaff_x24;
  qword *pqVar30;
  undefined *unaff_x25;
  undefined1 *puVar31;
  char *unaff_x26;
  undefined8 ******unaff_x27;
  qword *unaff_x28;
  undefined1 auStack_828 [24];
  qword *pqStack_810;
  qword *pqStack_808;
  int *piStack_800;
  qword *pqStack_7f8;
  undefined8 *****pppppuStack_7f0;
  code *pcStack_7e8;
  int aiStack_7e0 [18];
  undefined *puStack_798;
  qword *pqStack_790;
  undefined8 uStack_768;
  undefined1 *puStack_760;
  qword *pqStack_758;
  undefined8 *****pppppuStack_750;
  code *pcStack_748;
  qword aqStack_740 [3];
  undefined *puStack_728;
  qword *pqStack_720;
  qword *pqStack_6f8;
  ulong uStack_6f0;
  undefined *puStack_6c8;
  qword *pqStack_6c0;
  qword *pqStack_698;
  undefined8 ****ppppuStack_690;
  undefined *puStack_668;
  qword *pqStack_660;
  undefined8 uStack_638;
  qword *pqStack_630;
  undefined8 *****pppppuStack_628;
  undefined1 *puStack_620;
  qword *pqStack_618;
  qword *pqStack_610;
  undefined1 *puStack_608;
  undefined1 *****pppppuStack_600;
  code *pcStack_5f8;
  undefined1 auStack_5c8 [272];
  undefined1 auStack_4b8 [48];
  undefined8 uStack_488;
  undefined1 ****ppppuStack_430;
  code *pcStack_428;
  undefined1 *puStack_418;
  undefined8 *****pppppuStack_410;
  undefined1 auStack_408 [24];
  undefined1 auStack_3f0 [24];
  undefined1 auStack_3d8 [23];
  undefined1 uStack_3c1;
  qword *pqStack_3c0;
  ulong uStack_3b8;
  qword aqStack_390 [6];
  qword *pqStack_360;
  undefined8 *****pppppuStack_358;
  undefined8 uStack_350;
  undefined8 uStack_330;
  qword *pqStack_320;
  undefined8 *****pppppuStack_318;
  char *pcStack_310;
  undefined *puStack_308;
  qword *pqStack_300;
  char *pcStack_2f8;
  ulong uStack_2f0;
  undefined8 ****ppppuStack_2e8;
  undefined8 *****pppppuStack_2e0;
  qword *pqStack_2d8;
  undefined1 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 ****appppuStack_2c0 [9];
  undefined *puStack_278;
  undefined8 *****pppppuStack_270;
  undefined8 uStack_248;
  char *pcStack_240;
  undefined8 *****pppppuStack_238;
  undefined8 *****pppppuStack_230;
  qword *pqStack_228;
  undefined1 **ppuStack_220;
  code *pcStack_218;
  undefined8 ****ppppuStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 ****ppppuStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 ****ppppuStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  qword *pqStack_190;
  undefined8 *****pppppuStack_188;
  undefined8 uStack_180;
  undefined8 uStack_160;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 ****appppuStack_f0 [3];
  undefined8 *****pppppuStack_d8;
  undefined8 *****pppppuStack_d0;
  undefined8 *****apppppuStack_a8 [6];
  undefined8 ****ppppuStack_78;
  undefined8 *****pppppuStack_70;
  undefined8 uStack_48;
  
  ppppppuVar10 = (undefined8 ******)appppuStack_f0;
  func_0x006a3cdc();
  uStack_48 = extraout_x8;
  func_0x006a4238();
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x006a4224();
    pcVar21 = (char *)(ulong)*(uint *)((long)unaff_x19 + 0xec);
    ppppppuVar11 = apppppuStack_a8;
    ppppuStack_78 = param_4;
    pppppuStack_70 = param_5;
    func_0x0066741c();
    func_0x006a4218();
    pppppuStack_d8 = ppppppuVar11;
    pppppuStack_d0 = (undefined8 *****)pcVar21;
    func_0x006a40a0();
    func_0x006a4554(&ppppuStack_78);
    func_0x006a3c84();
    param_6 = extraout_x11;
    if (in_NG == in_OV) {
      param_6 = extraout_x8_00;
    }
    func_0x006a3f94();
LAB_0069ff84:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppuVar10);
LAB_0069ff88:
    pqVar12 = (qword *)0x0;
  }
  else {
    unaff_x20 = (char *)(unaff_x19 + 5);
    iVar22 = *(int *)unaff_x20;
    in_OV = SBORROW4(iVar22,5);
    in_NG = iVar22 + -5 < 0;
    in_ZR = iVar22 == 5;
    pcVar21 = (char *)param_5;
    if ((bool)in_ZR) {
      while( true ) {
        in_OV = SBORROW4(iVar22,5);
        in_NG = iVar22 + -5 < 0;
        in_ZR = iVar22 == 5;
        if (!(bool)in_ZR) break;
        func_0x006a4494();
        iVar22 = *(int *)unaff_x20;
      }
    }
    else {
      ppppppuVar10 = (undefined8 ******)&ppppuStack_78;
      FUN_00425cb4(ppppppuVar10,&UNK_00914d83);
      func_0x006a3fb4();
      unaff_x21 = (char *)ppppppuVar10;
      func_0x006a4164();
      if ((int)ppppppuVar10 == 0) {
        func_0x006a476c();
        FUN_00425cb4();
        pcVar21 = (char *)&ppppuStack_78;
        func_0x006a3fb4();
        func_0x006a4164();
        iVar22 = *(int *)unaff_x20;
        uVar4 = iVar22 - 3;
        in_OV = SBORROW4(uVar4,2);
        in_NG = iVar22 + -5 < 0;
        in_ZR = uVar4 == 2;
        if (1 < uVar4) {
          in_OV = SBORROW4(iVar22,2);
          in_NG = iVar22 + -2 < 0;
          in_ZR = iVar22 == 2;
          if (!(bool)in_ZR) {
            func_0x006a4634(&pppppuStack_d8);
            pppppuVar26 = (undefined8 *****)&UNK_0091517c;
            FUN_00532c74();
            ppppuStack_78 = pppppuVar26;
            pppppuStack_70 = (undefined8 *****)pcVar21;
            func_0x006a3fcc();
            apppppuStack_a8[0] = extraout_x10;
            if (in_NG == in_OV) {
              apppppuStack_a8[0] = &pppppuStack_d8;
            }
            func_0x006a40a0();
            func_0x006a4650();
            func_0x006a3c84();
            param_6 = extraout_x11_00;
            if (in_NG == in_OV) {
              param_6 = extraout_x8_01;
            }
            func_0x006a3f94();
LAB_006a0078:
            func_0x006a3f40();
            func_0x006a4208();
            ppppppuVar10 = &pppppuStack_d8;
            goto LAB_0069ff84;
          }
          if ((int)unaff_x21 != 0) {
            func_0x006a4634(&pppppuStack_d8);
            uVar25 = 0;
            func_0x00570864();
            pcVar21 = "inf";
            func_0x006a46bc();
            if ((uVar25 & 1) == 0) {
              pcVar21 = &UNK_009151a8;
              func_0x006a46bc();
              if ((uVar25 & 1) == 0) {
                func_0x006a4738();
                func_0x006a46bc();
                if ((uVar25 & 1) == 0) {
                  pppppuVar26 = (undefined8 *****)&UNK_009151b1;
                  FUN_00532c74();
                  ppppuStack_78 = pppppuVar26;
                  pppppuStack_70 = (undefined8 *****)pcVar21;
                  func_0x006a3fcc();
                  apppppuStack_a8[0] = extraout_x10_00;
                  if (in_NG == in_OV) {
                    apppppuStack_a8[0] = &pppppuStack_d8;
                  }
                  func_0x006a40a0();
                  func_0x006a4650();
                  func_0x006a3c84();
                  param_6 = extraout_x11_01;
                  if (in_NG == in_OV) {
                    param_6 = extraout_x8_02;
                  }
                  func_0x006a3f94();
                  goto LAB_006a0078;
                }
              }
            }
            func_0x006a40f8();
          }
        }
        func_0x006a4494();
      }
      else {
        func_0x006a41ac();
        pcVar21 = (char *)&ppppuStack_78;
        func_0x006a3fb4();
        func_0x006a4164();
        uVar25 = (ulong)unaff_x21 & 1;
        unaff_x20 = unaff_x21;
        unaff_x21 = (char *)ppppppuVar10;
        if (uVar25 == 0) {
          unaff_x20 = &UNK_00915024;
          unaff_x21 = "]";
          unaff_x22 = ",";
          unaff_x23 = "<";
          do {
            FUN_00425cb4(&ppppuStack_78,&UNK_00915024);
            pqVar12 = unaff_x19 + 6;
            pcVar21 = (char *)&ppppuStack_78;
            FUN_00459c38();
            if (((ulong)pqVar12 & 1) == 0) {
              func_0x006a4464(apppppuStack_a8);
              unaff_x24 = (char *)(unaff_x19 + 6);
              pcVar21 = (char *)apppppuStack_a8;
              FUN_00459c38();
              pqVar12 = (qword *)unaff_x24;
              func_0x006a4570();
              func_0x006a4164();
              if (((ulong)unaff_x24 & 1) != 0) goto LAB_0069fee8;
              func_0x006a45ec();
              if (((ulong)pqVar12 & 1) == 0) break;
            }
            else {
              func_0x006a4164();
LAB_0069fee8:
              func_0x006a4414();
              if ((int)pqVar12 == 0) goto LAB_0069ffc4;
            }
            unaff_x24 = (char *)&ppppuStack_78;
            func_0x006a467c();
            pcVar21 = (char *)&ppppuStack_78;
            func_0x006a3fb4();
            func_0x006a4164();
            if (((ulong)unaff_x24 & 1) != 0) goto LAB_0069ffbc;
            func_0x006a442c();
            pcVar21 = (char *)&ppppuStack_78;
            unaff_x24 = (char *)unaff_x19;
            FUN_006a1354();
            func_0x006a4164();
          } while (((ulong)unaff_x24 & 1) != 0);
          goto LAB_0069ff88;
        }
      }
    }
LAB_0069ffbc:
    func_0x006a4208();
    pqVar12 = (qword *)((long)&MACH_HEADER.magic + 1);
  }
LAB_0069ffc4:
  func_0x006a3c9c(uStack_48);
  if ((bool)in_ZR) {
    return pqVar12;
  }
  ___stack_chk_fail();
  func_0x006a3d90();
  pqVar12 = (qword *)&pppppuStack_d8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x006a3f28();
  pcStack_f8 = FUN_006a0120;
  puStack_100 = &stack0xfffffffffffffff0;
  func_0x006a3cdc();
  uStack_160 = extraout_x8_03;
  func_0x006a4238();
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x006a4224();
    uVar25 = (ulong)*(uint *)((long)unaff_x19 + 0xec);
    pppppuVar26 = &ppppuStack_1c0;
    pqStack_190 = pqVar12;
    pppppuStack_188 = (undefined8 *****)pcVar21;
    func_0x0066741c();
    func_0x006a4218();
    unaff_x20 = (char *)&ppppuStack_208;
    unaff_x19 = (qword *)&pqStack_190;
    ppppuStack_1f0 = pppppuVar26;
    uStack_1e8 = uVar25;
    FUN_00575ddc(&ppppuStack_208,unaff_x19,&ppppuStack_1c0,&ppppuStack_1f0);
    func_0x006a3d9c();
    param_6 = extraout_x11_02;
    pcVar21 = (char *)extraout_x10_01;
    if (in_NG == in_OV) {
      param_6 = extraout_x8_04;
      pcVar21 = unaff_x20;
    }
    func_0x006a3f94();
    func_0x006a3f80();
    pqVar27 = (qword *)0x0;
  }
  else {
    ppppuStack_208 = (undefined8 *****)0x0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    pcVar21 = (char *)&ppppuStack_208;
    func_0x006a45e4();
    if ((int)pqVar12 == 0) {
LAB_006a03dc:
      pqVar27 = (qword *)0x0;
      unaff_x19 = pqVar12;
    }
    else {
      unaff_x20 = ">";
      unaff_x21 = "}";
      unaff_x22 = "[";
      unaff_x23 = ".";
      unaff_x24 = "/";
      unaff_x26 = ":";
      unaff_x27 = (undefined8 ******)&UNK_00915024;
      unaff_x25 = &UNK_0090fadd;
LAB_006a01a4:
      ppqVar13 = &pqStack_190;
      FUN_00425cb4(ppqVar13,">");
      func_0x006a4578();
      if (((ulong)ppqVar13 & 1) == 0) {
        func_0x006a467c(&ppppuStack_1c0);
        func_0x006a4584();
        func_0x006a4040();
        func_0x006a404c();
        if (((ulong)unaff_x28 & 1) == 0) {
          ppppuStack_1f0 = (undefined8 *****)0x0;
          uStack_1e8 = 0;
          uStack_1e0 = 0;
          unaff_x28 = (qword *)&pqStack_190;
          func_0x006a442c();
          func_0x006a3fb4();
          pqVar12 = unaff_x28;
          func_0x006a404c();
          if ((int)unaff_x28 == 0) {
            pcVar21 = (char *)&ppppuStack_1f0;
            pqVar12 = unaff_x19;
            FUN_0069fdec();
            if ((int)pqVar12 == 0) goto LAB_006a03d8;
            goto LAB_006a02bc;
          }
          pcVar21 = (char *)&ppppuStack_1f0;
          func_0x006a41b8();
          if ((int)pqVar12 != 0) {
            do {
              pqStack_190 = (qword *)0x0;
              pppppuStack_188 = (undefined8 ******)0x0;
              uStack_180 = 0;
              func_0x006a4464(&ppppuStack_1c0);
              func_0x006a3fb4();
              func_0x006a4040();
              pcVar21 = unaff_x23;
              if (((ulong)unaff_x28 & 1) == 0) {
                FUN_00425cb4(&ppppuStack_1c0,"/");
                func_0x006a3fb4();
                func_0x006a4040();
                pcVar21 = unaff_x24;
                if ((int)unaff_x28 == 0) goto LAB_006a0298;
              }
              pqVar12 = (qword *)&pqStack_190;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                        (pqVar12,pcVar21);
              ppppuStack_1c0 = (undefined8 *****)0x0;
              uStack_1b8 = 0;
              uStack_1b0 = 0;
              pcVar21 = (char *)&ppppuStack_1c0;
              func_0x006a41b8();
              if (((ulong)pqVar12 & 1) == 0) {
                func_0x006a4114();
                func_0x006a404c();
                break;
              }
              FUN_004bab3c(&ppppuStack_1f0,&pqStack_190);
              FUN_004bab3c(&ppppuStack_1f0,&ppppuStack_1c0);
              func_0x006a4114();
              func_0x006a404c();
            } while( true );
          }
          goto LAB_006a03d8;
        }
      }
      else {
        func_0x006a404c();
      }
      pcVar21 = (char *)&ppppuStack_208;
      FUN_006a1354();
      pqVar12 = unaff_x19;
      if ((int)unaff_x19 == 0) goto LAB_006a03dc;
      func_0x006a4208();
      pqVar27 = (qword *)((long)&MACH_HEADER.magic + 1);
    }
    func_0x006a3f80();
  }
  func_0x006a3c9c(uStack_160);
  if ((bool)in_ZR) {
    return pqVar27;
  }
  ___stack_chk_fail();
  func_0x006a404c();
  pppppuVar26 = &ppppuStack_1f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x006a3f80();
  func_0x006a3f28();
  ppppppuVar10 = (undefined8 ******)appppuStack_2c0;
  pcStack_218 = FUN_006a04c8;
  pcStack_240 = unaff_x22;
  pppppuStack_238 = (undefined8 *****)unaff_x21;
  pppppuStack_230 = (undefined8 *****)unaff_x20;
  pqStack_228 = unaff_x19;
  ppuStack_220 = &puStack_100;
  func_0x006a3cdc();
  pppppuVar26 = pppppuVar26 + 5;
  uVar4 = *(uint *)pppppuVar26;
  cVar7 = SBORROW4(uVar4,5);
  cVar8 = (int)(uVar4 - 5) < 0;
  uStack_248 = extraout_x8_05;
  if (uVar4 == 5) {
    ppppppuVar11 = (undefined8 ******)pcVar21;
    func_0x0048d000(pcVar21);
    while (ppppppuVar10 = (undefined8 ******)pcVar21, *(uint *)pppppuVar26 == 5) {
      ppppppuVar11 = (undefined8 ******)pcVar21;
      FUN_006ac670(unaff_x19 + 6);
      FUN_006abef8(pppppuVar26);
    }
  }
  else {
    puVar14 = &UNK_009151c8;
    FUN_00532c74();
    puStack_278 = puVar14;
    pppppuStack_270 = (undefined8 *****)pcVar21;
    func_0x006a3cf0();
    func_0x006a4020();
    func_0x006a3c84();
    param_6 = extraout_x11_03;
    if (cVar8 == cVar7) {
      param_6 = extraout_x8_06;
    }
    func_0x006a3f94();
    func_0x006a3f40();
    ppppppuVar11 = (undefined8 ******)pcVar21;
  }
  uVar6 = 4 < uVar4;
  cVar7 = SBORROW4(uVar4,5);
  cVar8 = (int)(uVar4 - 5) < 0;
  uVar9 = uVar4 == 5;
  pqVar12 = (qword *)(ulong)(byte)uVar9;
  func_0x006a3c9c(uStack_248);
  if ((bool)uVar9) {
    return pqVar12;
  }
  ___stack_chk_fail();
  func_0x006a3d90();
  func_0x006a3f28();
  pcStack_2c8 = FUN_006a059c;
  pqStack_320 = unaff_x28;
  pppppuStack_318 = unaff_x27;
  pcStack_310 = unaff_x26;
  puStack_308 = unaff_x25;
  pqStack_300 = (qword *)unaff_x24;
  pcStack_2f8 = unaff_x23;
  uStack_2f0 = (ulong)uVar4;
  ppppuStack_2e8 = pppppuVar26;
  pppppuStack_2e0 = ppppppuVar10;
  pqStack_2d8 = unaff_x19;
  pppuStack_2d0 = &ppuStack_220;
  func_0x006a3cdc();
  uStack_330 = extraout_x8_07;
  func_0x006a4238();
  if ((bool)uVar9 || cVar8 != cVar7) {
    func_0x006a4224();
    pqStack_360 = pqVar12;
    pppppuStack_358 = ppppppuVar11;
    uVar25 = (ulong)*(uint *)((long)unaff_x19 + 0xec);
    pqVar12 = aqStack_390;
    func_0x0066741c();
    func_0x006a4218();
    pqVar27 = aqStack_390;
    pqStack_3c0 = pqVar12;
    uStack_3b8 = uVar25;
    FUN_00575ddc(auStack_3d8,&pqStack_360,pqVar27,&pqStack_3c0);
    func_0x006a3f88(uStack_3c1);
    puVar20 = extraout_x11_04;
    if (cVar8 == cVar7) {
      puVar20 = extraout_x8_09;
    }
    func_0x006a3f94();
    func_0x006a4570();
    pqVar12 = (qword *)0x0;
    pqVar16 = param_7;
LAB_006a0878:
    func_0x006a3c9c(uStack_330);
    if ((bool)uVar9) {
      return pqVar12;
    }
    ___stack_chk_fail();
LAB_006a08ac:
    func_0x0069e7cc();
  }
  else {
    unaff_x27 = (undefined8 ******)unaff_x19[2];
    puVar31 = param_6;
    pqVar16 = param_7;
    if (unaff_x27 == (undefined8 ******)0x0) {
LAB_006a07a8:
      pqStack_360 = (qword *)0x0;
      pppppuStack_358 = (undefined8 ******)0x0;
      uStack_350 = 0;
      pqVar27 = (qword *)&pqStack_360;
      func_0x006a45e4();
      if (((ulong)pqVar12 & 1) == 0) {
LAB_006a086c:
        pqVar12 = (qword *)0x0;
      }
      else {
        pqVar16 = (qword *)unaff_x19[1];
        if (pqVar16 == (qword *)0x0) {
          pqVar16 = (qword *)0x0;
        }
        else {
          (*(code *)((undefined8 *****)*pqVar16)[5])(pqVar16,param_7);
        }
        if ((*(byte *)((long)param_7 + 1) >> 5 & 1) == 0) {
          FUN_0068dd94(param_6,ppppppuVar11,param_7);
          uVar25 = 0;
          pqVar27 = (qword *)&pqStack_360;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
          puVar31 = auStack_408;
          func_0x006a411c();
          FUN_006a15e0();
          puVar20 = auStack_408;
        }
        else {
          FUN_0068e1d0(param_6,ppppppuVar11,param_7);
          uVar25 = 0;
          pqVar27 = (qword *)&pqStack_360;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
          puVar31 = auStack_3f0;
          func_0x006a411c();
          FUN_006a15e0();
          puVar20 = auStack_3f0;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar20);
        if ((uVar25 & 1) == 0) goto LAB_006a086c;
        func_0x006a4208();
        unaff_x19[2] = (qword)unaff_x27;
        pqVar12 = (qword *)((long)&MACH_HEADER.magic + 1);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      puVar20 = puVar31;
      goto LAB_006a0878;
    }
    pqVar15 = (qword *)(unaff_x27 + 4);
    Hint_Prefetch((undefined8 *****)*pqVar15,0,2,0);
    pqVar12 = param_7;
    puVar20 = param_6;
    FUN_006a2340((undefined8 *****)*pqVar15);
    lVar23 = 0;
    pqVar27 = pqVar12;
    while( true ) {
      func_0x006a4520(lVar23);
      uVar25 = extraout_x12;
      while (uVar25 != 0) {
        func_0x006a4744();
        pppppuVar26 = extraout_x13;
        if (extraout_x14 == (undefined8 ******)param_7) goto LAB_006a06d0;
        uVar25 = extraout_x12_00 - 1 & extraout_x12_00;
      }
      func_0x006a4538();
      if ((param_3 & 1) != 0) break;
      lVar23 = extraout_x8_08 + 8;
    }
    FUN_006a3030();
    pppppuVar26 = unaff_x27[5] + (long)pqVar15 * 4;
    *pppppuVar26 = (undefined8 ****)param_7;
    pppppuVar26[1] = (undefined8 ****)0x0;
    pppppuVar26[2] = (undefined8 ****)0x0;
    pppppuVar26[3] = (undefined8 ****)0x0;
    pppppuVar26 = unaff_x27[5];
    pqVar12 = pqVar15;
LAB_006a06d0:
    unaff_x28 = (qword *)(pppppuVar26 + (long)pqVar12 * 4);
    pqVar15 = &segment_command_00000020.vmsize;
    __Znwm();
    pqVar12 = pqVar15;
    func_0x006a470c();
    pqVar12[2] = 0;
    pqVar12[3] = 0;
    *pqVar12 = extraout_x8_10 + 0x10U;
    pqVar12[1] = 0;
    pqVar12[4] = extraout_x8_10 + 0x10U;
    pqVar12[5] = 0;
    pqVar12[6] = 0;
    pqVar12[7] = 0;
    pppppuVar26 = (undefined8 *****)unaff_x28[2];
    pppppuVar29 = (undefined8 *****)unaff_x28[3];
    uVar6 = pppppuVar29 <= pppppuVar26;
    uVar9 = pppppuVar26 == pppppuVar29;
    if (!(bool)uVar6) {
      pppppuVar29 = pppppuVar26 + 1;
      *pppppuVar26 = (undefined8 ****)pqVar15;
      puVar31 = puVar20;
LAB_006a079c:
      unaff_x28[2] = (qword)pppppuVar29;
      unaff_x19[2] = (qword)pppppuVar29[-1];
      goto LAB_006a07a8;
    }
    pqVar30 = (qword *)unaff_x28[1];
    puVar31 = (undefined1 *)((long)pppppuVar26 - (long)pqVar30);
    uVar25 = ((long)puVar31 >> 3) + 1;
    puStack_418 = param_6;
    pppppuStack_410 = ppppppuVar11;
    if (uVar25 >> 0x3d != 0) goto LAB_006a08ac;
    uVar24 = (long)pppppuVar29 - (long)pqVar30;
    uVar2 = (long)uVar24 >> 2;
    if ((ulong)((long)uVar24 >> 2) <= uVar25) {
      uVar2 = uVar25;
    }
    uVar6 = 0x7ffffffffffffff7 < uVar24;
    uVar9 = uVar24 == 0x7ffffffffffffff8;
    if ((bool)uVar6) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      lVar23 = 0;
LAB_006a0764:
      puVar1 = (undefined8 *)(puVar31 + lVar23);
      pqVar27 = puVar1 + -((long)puVar31 >> 3);
      pppppuVar29 = (undefined8 *****)(puVar1 + 1);
      *puVar1 = pqVar15;
      pqVar12 = pqVar27;
      _memcpy(pqVar27,pqVar30);
      unaff_x28[1] = (qword)pqVar27;
      unaff_x28[2] = (qword)pppppuVar29;
      unaff_x28[3] = (qword)(lVar23 + uVar2 * 8);
      ppppppuVar11 = (undefined8 ******)pppppuStack_410;
      param_6 = puStack_418;
      if (pqVar30 != (qword *)0x0) {
        __ZdlPv();
        pqVar12 = pqVar30;
        ppppppuVar11 = (undefined8 ******)pppppuStack_410;
        param_6 = puStack_418;
      }
      goto LAB_006a079c;
    }
    if (uVar2 >> 0x3d == 0) {
      lVar23 = uVar2 << 3;
      __Znwm();
      goto LAB_006a0764;
    }
  }
  FUN_0040cee8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pqStack_360);
  func_0x006a3f28();
  pcStack_428 = FUN_006a08f8;
  pqVar12 = pqVar27;
  pqVar15 = pqVar16;
  ppppuStack_430 = &pppuStack_2d0;
  func_0x006a3cdc();
  uStack_488 = extraout_x8_11;
  FUN_00656c60(pqVar15);
  func_0x006a47d8();
  if (!(bool)uVar6 || (bool)uVar9) {
                    /* WARNING: Could not recover jumptable at 0x006a0950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(ushort *)(&UNK_00827d8c + extraout_x8_12 * 2) * 4 + 0x6a0954))();
    return pqVar15;
  }
  func_0x006a3c9c(uStack_488);
  if ((bool)uVar9) {
    return (qword *)((long)&MACH_HEADER.magic + 1);
  }
  ___stack_chk_fail();
  func_0x006a42d8();
  puVar17 = auStack_4b8;
  FUN_0077670c();
  FUN_006a1afc();
  FUN_005558a0();
  puVar31 = auStack_5c8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x006a3f28();
  pqVar30 = aqStack_740;
  pcStack_5f8 = FUN_006a1354;
  puVar18 = puVar31;
  pqVar15 = pqVar12;
  pqStack_630 = unaff_x28;
  pppppuStack_628 = unaff_x27;
  puStack_620 = puVar20;
  pqStack_618 = pqVar27;
  pqStack_610 = pqVar16;
  puStack_608 = puVar17;
  pppppuStack_600 = &ppppuStack_430;
  func_0x006a3d70();
  pqVar27 = (qword *)(puVar18 + 0x30);
  pqVar16 = pqVar27;
  uStack_638 = extraout_x8_13;
  FUN_00459c38();
  if (((ulong)pqVar16 & 1) == 0) {
    puVar14 = &UNK_009152fd;
    FUN_00532c74();
    ppppuStack_690 = (undefined8 *****)pqVar12[1];
    pqStack_698 = (qword *)*pqVar12;
    if (-1 < (char)*(byte *)((long)pqVar12 + 0x17)) {
      ppppuStack_690 = (undefined8 *****)(ulong)*(byte *)((long)pqVar12 + 0x17);
      pqStack_698 = pqVar12;
    }
    puVar19 = &UNK_00915308;
    puStack_668 = puVar14;
    pqStack_660 = pqVar15;
    FUN_00532c74();
    bVar5 = puVar31[0x47];
    cVar8 = (char)bVar5 < '\0';
    uVar9 = bVar5 == 0;
    cVar7 = '\0';
    uStack_6f0 = *(ulong *)(puVar31 + 0x38);
    pqStack_6f8 = *(qword **)(puVar31 + 0x30);
    if (!(bool)cVar8) {
      uStack_6f0 = (ulong)bVar5;
      pqStack_6f8 = pqVar27;
    }
    puStack_6c8 = puVar19;
    pqStack_6c0 = pqVar15;
    func_0x006a3e84();
    puStack_728 = puVar19;
    pqStack_720 = pqVar15;
    FUN_0054dd58(aqStack_740,&puStack_668,&pqStack_698,&puStack_6c8,&pqStack_6f8,&puStack_728);
    func_0x006a3cc8();
    uVar3 = extraout_x11_05;
    pqVar15 = extraout_x10_02;
    if (cVar8 == cVar7) {
      uVar3 = extraout_x8_14;
      pqVar15 = aqStack_740;
    }
    puVar20 = puVar31;
    FUN_0069fcc8(puVar31,pqVar15,uVar3);
    func_0x006a3f40();
  }
  else {
    puVar20 = puVar31 + 0x28;
    FUN_006abef8();
    pqVar30 = pqVar27;
  }
  func_0x006a3c9c(uStack_638);
  if ((bool)uVar9) {
    return pqVar16;
  }
  ___stack_chk_fail();
  func_0x006a3d90();
  func_0x006a3f28();
  pcStack_748 = FUN_006a1470;
  puStack_760 = puVar31;
  pqStack_758 = pqVar16;
  pppppuStack_750 = &pppppuStack_600;
  func_0x006a47c4(pqVar15);
  piVar28 = (int *)(puVar20 + 0x28);
  iVar22 = *piVar28;
  uStack_768 = extraout_x9;
  if (iVar22 == 2) {
LAB_006a1508:
    uVar9 = 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (extraout_x8_15,pqVar16 + 6);
    func_0x006a4494();
    pqVar27 = (qword *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (((*(byte *)(pqVar16 + 0x1d) & 1) == 0) && ((*(byte *)((long)pqVar16 + 0xe5) & 1) == 0)) {
      if ((iVar22 == 3) && ((*(byte *)((long)pqVar16 + 0xe6) & 1) != 0)) goto LAB_006a1508;
    }
    else if (iVar22 == 3) goto LAB_006a1508;
    uVar9 = iVar22 == 3;
    puVar14 = &UNK_009150c9;
    FUN_00532c74();
    puStack_798 = puVar14;
    pqStack_790 = pqVar15;
    func_0x006a3cf0();
    func_0x006a4020();
    func_0x006a3c84();
    func_0x006a3f94();
    func_0x006a3f40();
    pqVar27 = (qword *)0x0;
    piVar28 = aiStack_7e0;
  }
  func_0x006a3c9c(uStack_768);
  if ((bool)uVar9) {
    return pqVar27;
  }
  ___stack_chk_fail();
  func_0x006a3d90();
  func_0x006a3f28();
  pcStack_7e8 = FUN_006a154c;
  pqStack_810 = pqVar12;
  pqStack_808 = pqVar30;
  piStack_800 = piVar28;
  pqStack_7f8 = pqVar16;
  pppppuStack_7f0 = &pppppuStack_750;
  func_0x006a43a8();
  func_0x006a4374();
  func_0x006a460c();
  func_0x006a3f80();
  if (((ulong)pqVar27 & 1) == 0) {
    func_0x006a4374();
    FUN_006a1354(piVar28,auStack_828);
    func_0x006a3f80();
    if (((ulong)piVar28 & 1) == 0) {
      return (qword *)0x0;
    }
    pcVar21 = "}";
  }
  else {
    pcVar21 = ">";
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(pqVar16,pcVar21);
  return (qword *)((long)&MACH_HEADER.magic + 1);
LAB_006a0298:
  func_0x006a404c();
  func_0x006a41ac(&pqStack_190);
  pcVar21 = (char *)&pqStack_190;
  unaff_x28 = unaff_x19;
  func_0x0069fbe8();
  pqVar12 = unaff_x28;
  func_0x006a404c();
  if (((ulong)unaff_x28 & 1) == 0) goto LAB_006a03d8;
LAB_006a02bc:
  func_0x006a40f0();
  FUN_00425cb4(&pqStack_190,":");
  pcVar21 = (char *)&pqStack_190;
  unaff_x28 = unaff_x19;
  FUN_0069fca8();
  pqVar12 = unaff_x28;
  func_0x006a404c();
  if ((int)unaff_x28 == 0) {
    func_0x006a4414();
    if ((int)pqVar12 == 0) goto LAB_006a03d8;
    goto LAB_006a0340;
  }
  func_0x006a40f0();
  pqVar12 = (qword *)&pqStack_190;
  pcVar21 = (char *)unaff_x27;
  FUN_00425cb4();
  func_0x006a4578();
  if (((ulong)pqVar12 & 1) == 0) {
    pqVar12 = (qword *)&ppppuStack_1c0;
    pcVar21 = "<";
    FUN_00425cb4();
    func_0x006a4584();
    func_0x006a4040();
    func_0x006a404c();
    if (((ulong)unaff_x28 & 1) != 0) goto LAB_006a0330;
    func_0x006a45ec();
  }
  else {
    func_0x006a404c();
LAB_006a0330:
    func_0x006a4414();
  }
  if (((ulong)pqVar12 & 1) != 0) {
LAB_006a0340:
    ppqVar13 = &pqStack_190;
    FUN_00425cb4(ppqVar13,&UNK_0090fadd);
    func_0x006a3fb4();
    if (((ulong)ppqVar13 & 1) == 0) {
      FUN_00425cb4(&ppppuStack_1c0,",");
      func_0x006a3fb4();
      func_0x006a4114();
    }
    func_0x006a404c();
    func_0x006a4140();
    goto LAB_006a01a4;
  }
LAB_006a03d8:
  func_0x006a4140();
  goto LAB_006a03dc;
}



/* Entry: 006a0120; end: 006a04c7;  */

qword * FUN_006a0120(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 ******param_4,
                    undefined8 param_5,undefined1 *param_6,qword *param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined1 uVar7;
  char cVar8;
  char cVar9;
  undefined1 uVar10;
  undefined8 ******ppppppuVar11;
  undefined *puVar12;
  qword *pqVar13;
  qword *pqVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  undefined1 *puVar18;
  qword *pqVar19;
  char *pcVar20;
  undefined8 ******ppppppuVar21;
  undefined8 extraout_x8;
  undefined1 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined1 *extraout_x8_02;
  undefined8 extraout_x8_03;
  long lVar22;
  long extraout_x8_04;
  undefined1 *extraout_x8_05;
  long extraout_x8_06;
  ulong uVar23;
  undefined8 extraout_x8_07;
  long extraout_x8_08;
  undefined8 extraout_x8_09;
  undefined8 extraout_x8_10;
  undefined8 extraout_x8_11;
  undefined8 extraout_x9;
  undefined8 ******extraout_x10;
  qword *extraout_x10_00;
  undefined1 *extraout_x11;
  undefined1 *extraout_x11_00;
  undefined1 *extraout_x11_01;
  undefined8 extraout_x11_02;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong uVar24;
  undefined8 *****extraout_x13;
  undefined8 *****pppppuVar25;
  undefined8 ******extraout_x14;
  undefined8 ******unaff_x19;
  qword *pqVar26;
  char *unaff_x20;
  int *piVar27;
  char *unaff_x21;
  undefined8 *****pppppuVar28;
  undefined *unaff_x22;
  char *unaff_x23;
  char *unaff_x24;
  qword *pqVar29;
  undefined *unaff_x25;
  undefined1 *puVar30;
  char *unaff_x26;
  undefined8 ******unaff_x27;
  undefined8 ******unaff_x28;
  undefined1 auStack_738 [24];
  qword *pqStack_720;
  qword *pqStack_718;
  int *piStack_710;
  qword *pqStack_708;
  undefined8 *****pppppuStack_700;
  code *pcStack_6f8;
  int aiStack_6f0 [18];
  undefined *puStack_6a8;
  qword *pqStack_6a0;
  undefined8 uStack_678;
  undefined1 *puStack_670;
  qword *pqStack_668;
  undefined1 *****pppppuStack_660;
  code *pcStack_658;
  qword aqStack_650 [3];
  undefined *puStack_638;
  qword *pqStack_630;
  qword *pqStack_608;
  ulong uStack_600;
  undefined *puStack_5d8;
  qword *pqStack_5d0;
  qword *pqStack_5a8;
  undefined8 ****ppppuStack_5a0;
  undefined *puStack_578;
  qword *pqStack_570;
  undefined8 uStack_548;
  undefined8 *****pppppuStack_540;
  undefined8 *****pppppuStack_538;
  undefined1 *puStack_530;
  qword *pqStack_528;
  qword *pqStack_520;
  undefined1 *puStack_518;
  undefined1 ****ppppuStack_510;
  code *pcStack_508;
  undefined1 auStack_4d8 [272];
  undefined1 auStack_3c8 [48];
  undefined8 uStack_398;
  undefined1 ***pppuStack_340;
  code *pcStack_338;
  undefined1 *puStack_328;
  undefined8 *****pppppuStack_320;
  undefined1 auStack_318 [24];
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [23];
  undefined1 uStack_2d1;
  qword *pqStack_2d0;
  ulong uStack_2c8;
  qword aqStack_2a0 [6];
  qword *pqStack_270;
  undefined8 *****pppppuStack_268;
  undefined8 uStack_260;
  undefined8 uStack_240;
  undefined8 *****pppppuStack_230;
  undefined8 *****pppppuStack_228;
  char *pcStack_220;
  undefined *puStack_218;
  char *pcStack_210;
  char *pcStack_208;
  ulong uStack_200;
  undefined8 ****ppppuStack_1f8;
  undefined8 *****pppppuStack_1f0;
  undefined8 *****pppppuStack_1e8;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  undefined8 ****appppuStack_1d0 [9];
  undefined *puStack_188;
  undefined8 *****pppppuStack_180;
  undefined8 uStack_158;
  undefined *puStack_150;
  char *pcStack_148;
  undefined8 *****pppppuStack_140;
  undefined8 *****pppppuStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 ****ppppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 ****ppppuStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 ****ppppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *****pppppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_70;
  
  func_0x006a3cdc();
  uStack_70 = extraout_x8;
  func_0x006a4238();
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x006a4224();
    uVar24 = (ulong)*(uint *)((long)unaff_x19 + 0xec);
    pppppuVar25 = &ppppuStack_d0;
    pppppuStack_a0 = param_4;
    uStack_98 = param_5;
    func_0x0066741c();
    func_0x006a4218();
    unaff_x20 = (char *)&ppppuStack_118;
    unaff_x19 = &pppppuStack_a0;
    ppppuStack_100 = pppppuVar25;
    uStack_f8 = uVar24;
    FUN_00575ddc(&ppppuStack_118,unaff_x19,&ppppuStack_d0,&ppppuStack_100);
    func_0x006a3d9c();
    param_6 = extraout_x11;
    pcVar20 = (char *)extraout_x10;
    if (in_NG == in_OV) {
      param_6 = extraout_x8_00;
      pcVar20 = unaff_x20;
    }
    func_0x006a3f94();
    func_0x006a3f80();
    pqVar26 = (qword *)0x0;
  }
  else {
    ppppuStack_118 = (undefined8 *****)0x0;
    uStack_110 = 0;
    uStack_108 = 0;
    pcVar20 = (char *)&ppppuStack_118;
    func_0x006a45e4();
    if ((int)param_4 == 0) {
LAB_006a03dc:
      pqVar26 = (qword *)0x0;
      unaff_x19 = param_4;
    }
    else {
      unaff_x20 = ">";
      unaff_x21 = "}";
      unaff_x22 = &UNK_00914d83;
      unaff_x23 = ".";
      unaff_x24 = "/";
      unaff_x26 = ":";
      unaff_x27 = (undefined8 ******)&UNK_00915024;
      unaff_x25 = &UNK_0090fadd;
LAB_006a01a4:
      ppppppuVar11 = &pppppuStack_a0;
      FUN_00425cb4(ppppppuVar11,">");
      func_0x006a4578();
      if (((ulong)ppppppuVar11 & 1) == 0) {
        func_0x006a467c(&ppppuStack_d0);
        func_0x006a4584();
        func_0x006a4040();
        func_0x006a404c();
        if (((ulong)unaff_x28 & 1) == 0) {
          ppppuStack_100 = (undefined8 *****)0x0;
          uStack_f8 = 0;
          uStack_f0 = 0;
          unaff_x28 = &pppppuStack_a0;
          func_0x006a442c();
          func_0x006a3fb4();
          param_4 = unaff_x28;
          func_0x006a404c();
          if ((int)unaff_x28 == 0) {
            pcVar20 = (char *)&ppppuStack_100;
            param_4 = unaff_x19;
            FUN_0069fdec();
            if ((int)param_4 == 0) goto LAB_006a03d8;
            goto LAB_006a02bc;
          }
          pcVar20 = (char *)&ppppuStack_100;
          func_0x006a41b8();
          if ((int)param_4 != 0) {
            do {
              pppppuStack_a0 = (undefined8 ******)0x0;
              uStack_98 = 0;
              uStack_90 = 0;
              func_0x006a4464(&ppppuStack_d0);
              func_0x006a3fb4();
              func_0x006a4040();
              pcVar20 = unaff_x23;
              if (((ulong)unaff_x28 & 1) == 0) {
                FUN_00425cb4(&ppppuStack_d0,"/");
                func_0x006a3fb4();
                func_0x006a4040();
                pcVar20 = unaff_x24;
                if ((int)unaff_x28 == 0) goto LAB_006a0298;
              }
              param_4 = &pppppuStack_a0;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                        (param_4,pcVar20);
              ppppuStack_d0 = (undefined8 *****)0x0;
              uStack_c8 = 0;
              uStack_c0 = 0;
              pcVar20 = (char *)&ppppuStack_d0;
              func_0x006a41b8();
              if (((ulong)param_4 & 1) == 0) {
                func_0x006a4114();
                func_0x006a404c();
                break;
              }
              FUN_004bab3c(&ppppuStack_100,&pppppuStack_a0);
              FUN_004bab3c(&ppppuStack_100,&ppppuStack_d0);
              func_0x006a4114();
              func_0x006a404c();
            } while( true );
          }
          goto LAB_006a03d8;
        }
      }
      else {
        func_0x006a404c();
      }
      pcVar20 = (char *)&ppppuStack_118;
      FUN_006a1354();
      param_4 = unaff_x19;
      if ((int)unaff_x19 == 0) goto LAB_006a03dc;
      func_0x006a4208();
      pqVar26 = (qword *)((long)&MACH_HEADER.magic + 1);
    }
    func_0x006a3f80();
  }
  func_0x006a3c9c(uStack_70);
  if ((bool)in_ZR) {
    return pqVar26;
  }
  ___stack_chk_fail();
  func_0x006a404c();
  pppppuVar25 = &ppppuStack_100;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x006a3f80();
  func_0x006a3f28();
  ppppppuVar11 = (undefined8 ******)appppuStack_1d0;
  pcStack_128 = FUN_006a04c8;
  puStack_150 = unaff_x22;
  pcStack_148 = unaff_x21;
  pppppuStack_140 = (undefined8 *****)unaff_x20;
  pppppuStack_138 = unaff_x19;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x006a3cdc();
  pppppuVar25 = pppppuVar25 + 5;
  uVar4 = *(uint *)pppppuVar25;
  cVar8 = SBORROW4(uVar4,5);
  cVar9 = (int)(uVar4 - 5) < 0;
  uStack_158 = extraout_x8_01;
  if (uVar4 == 5) {
    ppppppuVar21 = (undefined8 ******)pcVar20;
    func_0x0048d000(pcVar20);
    while (ppppppuVar11 = (undefined8 ******)pcVar20, *(uint *)pppppuVar25 == 5) {
      ppppppuVar21 = (undefined8 ******)pcVar20;
      FUN_006ac670(unaff_x19 + 6);
      FUN_006abef8(pppppuVar25);
    }
  }
  else {
    puVar12 = &UNK_009151c8;
    FUN_00532c74();
    puStack_188 = puVar12;
    pppppuStack_180 = (undefined8 *****)pcVar20;
    func_0x006a3cf0();
    func_0x006a4020();
    func_0x006a3c84();
    param_6 = extraout_x11_00;
    if (cVar9 == cVar8) {
      param_6 = extraout_x8_02;
    }
    func_0x006a3f94();
    func_0x006a3f40();
    ppppppuVar21 = (undefined8 ******)pcVar20;
  }
  uVar7 = 4 < uVar4;
  cVar8 = SBORROW4(uVar4,5);
  cVar9 = (int)(uVar4 - 5) < 0;
  uVar10 = uVar4 == 5;
  pqVar26 = (qword *)(ulong)(byte)uVar10;
  func_0x006a3c9c(uStack_158);
  if ((bool)uVar10) {
    return pqVar26;
  }
  ___stack_chk_fail();
  func_0x006a3d90();
  func_0x006a3f28();
  pcStack_1d8 = FUN_006a059c;
  pppppuStack_230 = unaff_x28;
  pppppuStack_228 = unaff_x27;
  pcStack_220 = unaff_x26;
  puStack_218 = unaff_x25;
  pcStack_210 = unaff_x24;
  pcStack_208 = unaff_x23;
  uStack_200 = (ulong)uVar4;
  ppppuStack_1f8 = pppppuVar25;
  pppppuStack_1f0 = ppppppuVar11;
  pppppuStack_1e8 = unaff_x19;
  ppuStack_1e0 = &puStack_130;
  func_0x006a3cdc();
  uStack_240 = extraout_x8_03;
  func_0x006a4238();
  if ((bool)uVar10 || cVar9 != cVar8) {
    func_0x006a4224();
    pqStack_270 = pqVar26;
    pppppuStack_268 = ppppppuVar21;
    uVar24 = (ulong)*(uint *)((long)unaff_x19 + 0xec);
    pqVar26 = aqStack_2a0;
    func_0x0066741c();
    func_0x006a4218();
    pqVar19 = aqStack_2a0;
    pqStack_2d0 = pqVar26;
    uStack_2c8 = uVar24;
    FUN_00575ddc(auStack_2e8,&pqStack_270,pqVar19,&pqStack_2d0);
    func_0x006a3f88(uStack_2d1);
    puVar18 = extraout_x11_01;
    if (cVar9 == cVar8) {
      puVar18 = extraout_x8_05;
    }
    func_0x006a3f94();
    func_0x006a4570();
    pqVar26 = (qword *)0x0;
    pqVar14 = param_7;
LAB_006a0878:
    func_0x006a3c9c(uStack_240);
    if ((bool)uVar10) {
      return pqVar26;
    }
    ___stack_chk_fail();
LAB_006a08ac:
    func_0x0069e7cc();
  }
  else {
    unaff_x27 = (undefined8 ******)unaff_x19[2];
    puVar30 = param_6;
    pqVar14 = param_7;
    if (unaff_x27 == (undefined8 ******)0x0) {
LAB_006a07a8:
      pqStack_270 = (qword *)0x0;
      pppppuStack_268 = (undefined8 ******)0x0;
      uStack_260 = 0;
      pqVar19 = (qword *)&pqStack_270;
      func_0x006a45e4();
      if (((ulong)pqVar26 & 1) == 0) {
LAB_006a086c:
        pqVar26 = (qword *)0x0;
      }
      else {
        pqVar14 = (qword *)unaff_x19[1];
        if (pqVar14 == (qword *)0x0) {
          pqVar14 = (qword *)0x0;
        }
        else {
          (*(code *)((undefined8 *****)*pqVar14)[5])(pqVar14,param_7);
        }
        if ((*(byte *)((long)param_7 + 1) >> 5 & 1) == 0) {
          FUN_0068dd94(param_6,ppppppuVar21,param_7);
          uVar24 = 0;
          pqVar19 = (qword *)&pqStack_270;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
          puVar30 = auStack_318;
          func_0x006a411c();
          FUN_006a15e0();
          puVar18 = auStack_318;
        }
        else {
          FUN_0068e1d0(param_6,ppppppuVar21,param_7);
          uVar24 = 0;
          pqVar19 = (qword *)&pqStack_270;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
          puVar30 = auStack_300;
          func_0x006a411c();
          FUN_006a15e0();
          puVar18 = auStack_300;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar18);
        if ((uVar24 & 1) == 0) goto LAB_006a086c;
        func_0x006a4208();
        unaff_x19[2] = unaff_x27;
        pqVar26 = (qword *)((long)&MACH_HEADER.magic + 1);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      puVar18 = puVar30;
      goto LAB_006a0878;
    }
    pqVar13 = (qword *)(unaff_x27 + 4);
    Hint_Prefetch((undefined8 *****)*pqVar13,0,2,0);
    pqVar26 = param_7;
    puVar18 = param_6;
    FUN_006a2340((undefined8 *****)*pqVar13);
    lVar22 = 0;
    pqVar19 = pqVar26;
    while( true ) {
      func_0x006a4520(lVar22);
      uVar24 = extraout_x12;
      while (uVar24 != 0) {
        func_0x006a4744();
        pppppuVar25 = extraout_x13;
        if (extraout_x14 == (undefined8 ******)param_7) goto LAB_006a06d0;
        uVar24 = extraout_x12_00 - 1 & extraout_x12_00;
      }
      func_0x006a4538();
      if ((param_3 & 1) != 0) break;
      lVar22 = extraout_x8_04 + 8;
    }
    FUN_006a3030();
    pppppuVar25 = unaff_x27[5] + (long)pqVar13 * 4;
    *pppppuVar25 = (undefined8 ****)param_7;
    pppppuVar25[1] = (undefined8 ****)0x0;
    pppppuVar25[2] = (undefined8 ****)0x0;
    pppppuVar25[3] = (undefined8 ****)0x0;
    pppppuVar25 = unaff_x27[5];
    pqVar26 = pqVar13;
LAB_006a06d0:
    unaff_x28 = (undefined8 ******)(pppppuVar25 + (long)pqVar26 * 4);
    pqVar13 = &segment_command_00000020.vmsize;
    __Znwm();
    pqVar26 = pqVar13;
    func_0x006a470c();
    pqVar26[2] = 0;
    pqVar26[3] = 0;
    *pqVar26 = extraout_x8_06 + 0x10U;
    pqVar26[1] = 0;
    pqVar26[4] = extraout_x8_06 + 0x10U;
    pqVar26[5] = 0;
    pqVar26[6] = 0;
    pqVar26[7] = 0;
    pppppuVar25 = unaff_x28[2];
    pppppuVar28 = unaff_x28[3];
    uVar7 = pppppuVar28 <= pppppuVar25;
    uVar10 = pppppuVar25 == pppppuVar28;
    if (!(bool)uVar7) {
      pppppuVar28 = pppppuVar25 + 1;
      *pppppuVar25 = (undefined8 ****)pqVar13;
      puVar30 = puVar18;
LAB_006a079c:
      unaff_x28[2] = pppppuVar28;
      unaff_x19[2] = (undefined8 *****)pppppuVar28[-1];
      goto LAB_006a07a8;
    }
    pqVar29 = (qword *)unaff_x28[1];
    puVar30 = (undefined1 *)((long)pppppuVar25 - (long)pqVar29);
    uVar24 = ((long)puVar30 >> 3) + 1;
    puStack_328 = param_6;
    pppppuStack_320 = ppppppuVar21;
    if (uVar24 >> 0x3d != 0) goto LAB_006a08ac;
    uVar23 = (long)pppppuVar28 - (long)pqVar29;
    uVar2 = (long)uVar23 >> 2;
    if ((ulong)((long)uVar23 >> 2) <= uVar24) {
      uVar2 = uVar24;
    }
    uVar7 = 0x7ffffffffffffff7 < uVar23;
    uVar10 = uVar23 == 0x7ffffffffffffff8;
    if ((bool)uVar7) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      lVar22 = 0;
LAB_006a0764:
      puVar1 = (undefined8 *)(puVar30 + lVar22);
      pqVar19 = puVar1 + -((long)puVar30 >> 3);
      pppppuVar28 = (undefined8 *****)(puVar1 + 1);
      *puVar1 = pqVar13;
      pqVar26 = pqVar19;
      _memcpy(pqVar19,pqVar29);
      unaff_x28[1] = (undefined8 *****)pqVar19;
      unaff_x28[2] = pppppuVar28;
      unaff_x28[3] = (undefined8 *****)(lVar22 + uVar2 * 8);
      ppppppuVar21 = (undefined8 ******)pppppuStack_320;
      param_6 = puStack_328;
      if (pqVar29 != (qword *)0x0) {
        __ZdlPv();
        pqVar26 = pqVar29;
        ppppppuVar21 = (undefined8 ******)pppppuStack_320;
        param_6 = puStack_328;
      }
      goto LAB_006a079c;
    }
    if (uVar2 >> 0x3d == 0) {
      lVar22 = uVar2 << 3;
      __Znwm();
      goto LAB_006a0764;
    }
  }
  FUN_0040cee8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_300);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pqStack_270);
  func_0x006a3f28();
  pcStack_338 = FUN_006a08f8;
  pqVar26 = pqVar19;
  pqVar13 = pqVar14;
  pppuStack_340 = &ppuStack_1e0;
  func_0x006a3cdc();
  uStack_398 = extraout_x8_07;
  FUN_00656c60(pqVar13);
  func_0x006a47d8();
  if (!(bool)uVar7 || (bool)uVar10) {
                    /* WARNING: Could not recover jumptable at 0x006a0950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(ushort *)(&UNK_00827d8c + extraout_x8_08 * 2) * 4 + 0x6a0954))();
    return pqVar13;
  }
  func_0x006a3c9c(uStack_398);
  if ((bool)uVar10) {
    return (qword *)((long)&MACH_HEADER.magic + 1);
  }
  ___stack_chk_fail();
  func_0x006a42d8();
  puVar15 = auStack_3c8;
  FUN_0077670c();
  FUN_006a1afc();
  FUN_005558a0();
  puVar30 = auStack_4d8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x006a3f28();
  pqVar29 = aqStack_650;
  pcStack_508 = FUN_006a1354;
  puVar16 = puVar30;
  pqVar13 = pqVar26;
  pppppuStack_540 = unaff_x28;
  pppppuStack_538 = unaff_x27;
  puStack_530 = puVar18;
  pqStack_528 = pqVar19;
  pqStack_520 = pqVar14;
  puStack_518 = puVar15;
  ppppuStack_510 = &pppuStack_340;
  func_0x006a3d70();
  pqVar19 = (qword *)(puVar16 + 0x30);
  pqVar14 = pqVar19;
  uStack_548 = extraout_x8_09;
  FUN_00459c38();
  if (((ulong)pqVar14 & 1) == 0) {
    puVar12 = &UNK_009152fd;
    FUN_00532c74();
    ppppuStack_5a0 = (undefined8 *****)pqVar26[1];
    pqStack_5a8 = (qword *)*pqVar26;
    if (-1 < (char)*(byte *)((long)pqVar26 + 0x17)) {
      ppppuStack_5a0 = (undefined8 *****)(ulong)*(byte *)((long)pqVar26 + 0x17);
      pqStack_5a8 = pqVar26;
    }
    puVar17 = &UNK_00915308;
    puStack_578 = puVar12;
    pqStack_570 = pqVar13;
    FUN_00532c74();
    bVar6 = puVar30[0x47];
    cVar9 = (char)bVar6 < '\0';
    uVar10 = bVar6 == 0;
    cVar8 = '\0';
    uStack_600 = *(ulong *)(puVar30 + 0x38);
    pqStack_608 = *(qword **)(puVar30 + 0x30);
    if (!(bool)cVar9) {
      uStack_600 = (ulong)bVar6;
      pqStack_608 = pqVar19;
    }
    puStack_5d8 = puVar17;
    pqStack_5d0 = pqVar13;
    func_0x006a3e84();
    puStack_638 = puVar17;
    pqStack_630 = pqVar13;
    FUN_0054dd58(aqStack_650,&puStack_578,&pqStack_5a8,&puStack_5d8,&pqStack_608,&puStack_638);
    func_0x006a3cc8();
    uVar3 = extraout_x11_02;
    pqVar13 = extraout_x10_00;
    if (cVar9 == cVar8) {
      uVar3 = extraout_x8_10;
      pqVar13 = aqStack_650;
    }
    puVar18 = puVar30;
    FUN_0069fcc8(puVar30,pqVar13,uVar3);
    func_0x006a3f40();
  }
  else {
    puVar18 = puVar30 + 0x28;
    FUN_006abef8();
    pqVar29 = pqVar19;
  }
  func_0x006a3c9c(uStack_548);
  if ((bool)uVar10) {
    return pqVar14;
  }
  ___stack_chk_fail();
  func_0x006a3d90();
  func_0x006a3f28();
  pcStack_658 = FUN_006a1470;
  puStack_670 = puVar30;
  pqStack_668 = pqVar14;
  pppppuStack_660 = &ppppuStack_510;
  func_0x006a47c4(pqVar13);
  piVar27 = (int *)(puVar18 + 0x28);
  iVar5 = *piVar27;
  uStack_678 = extraout_x9;
  if (iVar5 == 2) {
LAB_006a1508:
    uVar10 = 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (extraout_x8_11,pqVar14 + 6);
    func_0x006a4494();
    pqVar19 = (qword *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (((*(byte *)(pqVar14 + 0x1d) & 1) == 0) && ((*(byte *)((long)pqVar14 + 0xe5) & 1) == 0)) {
      if ((iVar5 == 3) && ((*(byte *)((long)pqVar14 + 0xe6) & 1) != 0)) goto LAB_006a1508;
    }
    else if (iVar5 == 3) goto LAB_006a1508;
    uVar10 = iVar5 == 3;
    puVar12 = &UNK_009150c9;
    FUN_00532c74();
    puStack_6a8 = puVar12;
    pqStack_6a0 = pqVar13;
    func_0x006a3cf0();
    func_0x006a4020();
    func_0x006a3c84();
    func_0x006a3f94();
    func_0x006a3f40();
    pqVar19 = (qword *)0x0;
    piVar27 = aiStack_6f0;
  }
  func_0x006a3c9c(uStack_678);
  if ((bool)uVar10) {
    return pqVar19;
  }
  ___stack_chk_fail();
  func_0x006a3d90();
  func_0x006a3f28();
  pcStack_6f8 = FUN_006a154c;
  pqStack_720 = pqVar26;
  pqStack_718 = pqVar29;
  piStack_710 = piVar27;
  pqStack_708 = pqVar14;
  pppppuStack_700 = &pppppuStack_660;
  func_0x006a43a8();
  func_0x006a4374();
  func_0x006a460c();
  func_0x006a3f80();
  if (((ulong)pqVar19 & 1) == 0) {
    func_0x006a4374();
    FUN_006a1354(piVar27,auStack_738);
    func_0x006a3f80();
    if (((ulong)piVar27 & 1) == 0) {
      return (qword *)0x0;
    }
    pcVar20 = "}";
  }
  else {
    pcVar20 = ">";
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(pqVar14,pcVar20);
  return (qword *)((long)&MACH_HEADER.magic + 1);
LAB_006a0298:
  func_0x006a404c();
  func_0x006a41ac(&pppppuStack_a0);
  pcVar20 = (char *)&pppppuStack_a0;
  unaff_x28 = unaff_x19;
  func_0x0069fbe8();
  param_4 = unaff_x28;
  func_0x006a404c();
  if (((ulong)unaff_x28 & 1) == 0) goto LAB_006a03d8;
LAB_006a02bc:
  func_0x006a40f0();
  FUN_00425cb4(&pppppuStack_a0,":");
  pcVar20 = (char *)&pppppuStack_a0;
  unaff_x28 = unaff_x19;
  FUN_0069fca8();
  param_4 = unaff_x28;
  func_0x006a404c();
  if ((int)unaff_x28 == 0) {
    func_0x006a4414();
    if ((int)param_4 == 0) goto LAB_006a03d8;
    goto LAB_006a0340;
  }
  func_0x006a40f0();
  param_4 = &pppppuStack_a0;
  pcVar20 = (char *)unaff_x27;
  FUN_00425cb4();
  func_0x006a4578();
  if (((ulong)param_4 & 1) == 0) {
    param_4 = (undefined8 ******)&ppppuStack_d0;
    pcVar20 = "<";
    FUN_00425cb4();
    func_0x006a4584();
    func_0x006a4040();
    func_0x006a404c();
    if (((ulong)unaff_x28 & 1) != 0) goto LAB_006a0330;
    func_0x006a45ec();
  }
  else {
    func_0x006a404c();
LAB_006a0330:
    func_0x006a4414();
  }
  if (((ulong)param_4 & 1) != 0) {
LAB_006a0340:
    ppppppuVar11 = &pppppuStack_a0;
    FUN_00425cb4(ppppppuVar11,&UNK_0090fadd);
    func_0x006a3fb4();
    if (((ulong)ppppppuVar11 & 1) == 0) {
      FUN_00425cb4(&ppppuStack_d0,",");
      func_0x006a3fb4();
      func_0x006a4114();
    }
    func_0x006a404c();
    func_0x006a4140();
    goto LAB_006a01a4;
  }
LAB_006a03d8:
  func_0x006a4140();
  goto LAB_006a03dc;
}



/* Entry: 006a04c8; end: 006a059b;  */

qword * FUN_006a04c8(undefined8 param_1,undefined8 param_2,uint param_3,long param_4,
                    undefined8 param_5,undefined1 *param_6,qword *param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  undefined1 uVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  undefined *puVar10;
  qword *pqVar11;
  qword *pqVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  qword *pqVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  char *pcVar19;
  undefined8 extraout_x8;
  undefined1 *extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar20;
  long extraout_x8_02;
  undefined1 *extraout_x8_03;
  long extraout_x8_04;
  ulong uVar21;
  undefined8 extraout_x8_05;
  long extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined8 extraout_x8_08;
  undefined8 extraout_x8_09;
  undefined8 extraout_x9;
  qword *extraout_x10;
  undefined1 *extraout_x11;
  undefined1 *extraout_x11_00;
  undefined8 extraout_x11_01;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong uVar22;
  long extraout_x13;
  qword **extraout_x14;
  long unaff_x19;
  int *piVar23;
  uint *puVar24;
  undefined8 *puVar25;
  qword *pqVar26;
  qword *pqVar27;
  undefined1 *puVar28;
  long unaff_x27;
  long unaff_x28;
  undefined1 auStack_618 [24];
  qword *pqStack_600;
  qword *pqStack_5f8;
  int *piStack_5f0;
  qword *pqStack_5e8;
  undefined1 *****pppppuStack_5e0;
  code *pcStack_5d8;
  int aiStack_5d0 [18];
  undefined *puStack_588;
  qword *pqStack_580;
  undefined8 uStack_558;
  undefined1 *puStack_550;
  qword *pqStack_548;
  undefined1 ****ppppuStack_540;
  code *pcStack_538;
  qword aqStack_530 [3];
  undefined *puStack_518;
  qword *pqStack_510;
  qword *pqStack_4e8;
  ulong uStack_4e0;
  undefined *puStack_4b8;
  qword *pqStack_4b0;
  qword *pqStack_488;
  qword *pqStack_480;
  undefined *puStack_458;
  qword *pqStack_450;
  undefined8 uStack_428;
  long lStack_420;
  long lStack_418;
  undefined1 *puStack_410;
  qword *pqStack_408;
  qword *pqStack_400;
  undefined1 *puStack_3f8;
  undefined1 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined1 auStack_3b8 [272];
  undefined1 auStack_2a8 [48];
  undefined8 uStack_278;
  undefined1 **ppuStack_220;
  code *pcStack_218;
  undefined1 *puStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [23];
  undefined1 uStack_1b1;
  qword *pqStack_1b0;
  ulong uStack_1a8;
  qword aqStack_180 [6];
  qword *pqStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_120;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_38;
  
  func_0x006a3cdc();
  puVar24 = (uint *)(param_4 + 0x28);
  uVar3 = *puVar24;
  cVar7 = SBORROW4(uVar3,5);
  cVar8 = (int)(uVar3 - 5) < 0;
  uStack_38 = extraout_x8;
  if (uVar3 == 5) {
    uVar18 = param_5;
    func_0x0048d000(param_5);
    while (*puVar24 == 5) {
      uVar18 = param_5;
      FUN_006ac670(unaff_x19 + 0x30);
      FUN_006abef8(puVar24);
    }
  }
  else {
    puVar10 = &UNK_009151c8;
    FUN_00532c74();
    puStack_68 = puVar10;
    uStack_60 = param_5;
    func_0x006a3cf0();
    func_0x006a4020();
    func_0x006a3c84();
    param_6 = extraout_x11;
    if (cVar8 == cVar7) {
      param_6 = extraout_x8_00;
    }
    func_0x006a3f94();
    func_0x006a3f40();
    uVar18 = param_5;
  }
  uVar6 = 4 < uVar3;
  cVar7 = SBORROW4(uVar3,5);
  cVar8 = (int)(uVar3 - 5) < 0;
  uVar9 = uVar3 == 5;
  pqVar11 = (qword *)(ulong)(byte)uVar9;
  func_0x006a3c9c(uStack_38);
  if ((bool)uVar9) {
    return pqVar11;
  }
  ___stack_chk_fail();
  func_0x006a3d90();
  func_0x006a3f28();
  pcStack_b8 = FUN_006a059c;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x006a3cdc();
  uStack_120 = extraout_x8_01;
  func_0x006a4238();
  if ((bool)uVar9 || cVar8 != cVar7) {
    func_0x006a4224();
    uVar22 = (ulong)*(uint *)(unaff_x19 + 0xec);
    pqVar12 = aqStack_180;
    pqStack_150 = pqVar11;
    uStack_148 = uVar18;
    func_0x0066741c();
    func_0x006a4218();
    pqVar15 = aqStack_180;
    pqStack_1b0 = pqVar12;
    uStack_1a8 = uVar22;
    FUN_00575ddc(auStack_1c8,&pqStack_150,pqVar15,&pqStack_1b0);
    func_0x006a3f88(uStack_1b1);
    puVar17 = extraout_x11_00;
    if (cVar8 == cVar7) {
      puVar17 = extraout_x8_03;
    }
    func_0x006a3f94();
    func_0x006a4570();
    pqVar11 = (qword *)0x0;
    pqVar12 = param_7;
LAB_006a0878:
    func_0x006a3c9c(uStack_120);
    if ((bool)uVar9) {
      return pqVar11;
    }
    ___stack_chk_fail();
LAB_006a08ac:
    func_0x0069e7cc();
  }
  else {
    unaff_x27 = *(long *)(unaff_x19 + 0x10);
    puVar28 = param_6;
    pqVar12 = param_7;
    if (unaff_x27 == 0) {
LAB_006a07a8:
      pqStack_150 = (qword *)0x0;
      uStack_148 = 0;
      uStack_140 = 0;
      pqVar15 = (qword *)&pqStack_150;
      func_0x006a45e4();
      if (((ulong)pqVar11 & 1) == 0) {
LAB_006a086c:
        pqVar11 = (qword *)0x0;
      }
      else {
        pqVar12 = *(qword **)(unaff_x19 + 8);
        if (pqVar12 == (qword *)0x0) {
          pqVar12 = (qword *)0x0;
        }
        else {
          (*(code *)((qword *)*pqVar12)[5])(pqVar12,param_7);
        }
        if ((*(byte *)((long)param_7 + 1) >> 5 & 1) == 0) {
          FUN_0068dd94(param_6,uVar18,param_7);
          uVar22 = 0;
          pqVar15 = (qword *)&pqStack_150;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
          puVar28 = auStack_1f8;
          func_0x006a411c();
          FUN_006a15e0();
          puVar17 = auStack_1f8;
        }
        else {
          FUN_0068e1d0(param_6,uVar18,param_7);
          uVar22 = 0;
          pqVar15 = (qword *)&pqStack_150;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
          puVar28 = auStack_1e0;
          func_0x006a411c();
          FUN_006a15e0();
          puVar17 = auStack_1e0;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar17);
        if ((uVar22 & 1) == 0) goto LAB_006a086c;
        func_0x006a4208();
        *(long *)(unaff_x19 + 0x10) = unaff_x27;
        pqVar11 = (qword *)((long)&MACH_HEADER.magic + 1);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      puVar17 = puVar28;
      goto LAB_006a0878;
    }
    pqVar26 = (qword *)(unaff_x27 + 0x20);
    Hint_Prefetch((qword *)*pqVar26,0,2,0);
    pqVar11 = param_7;
    puVar17 = param_6;
    FUN_006a2340((qword *)*pqVar26);
    lVar20 = 0;
    pqVar15 = pqVar11;
    while( true ) {
      func_0x006a4520(lVar20);
      uVar22 = extraout_x12;
      while (uVar22 != 0) {
        func_0x006a4744();
        lVar20 = extraout_x13;
        if (extraout_x14 == (qword **)param_7) goto LAB_006a06d0;
        uVar22 = extraout_x12_00 - 1 & extraout_x12_00;
      }
      func_0x006a4538();
      if ((param_3 & 1) != 0) break;
      lVar20 = extraout_x8_02 + 8;
    }
    FUN_006a3030();
    puVar1 = (undefined8 *)(*(long *)(unaff_x27 + 0x28) + (long)pqVar26 * 0x20);
    *puVar1 = param_7;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    lVar20 = *(long *)(unaff_x27 + 0x28);
    pqVar11 = pqVar26;
LAB_006a06d0:
    unaff_x28 = lVar20 + (long)pqVar11 * 0x20;
    pqVar26 = &segment_command_00000020.vmsize;
    __Znwm();
    pqVar11 = pqVar26;
    func_0x006a470c();
    pqVar11[2] = 0;
    pqVar11[3] = 0;
    *pqVar11 = extraout_x8_04 + 0x10U;
    pqVar11[1] = 0;
    pqVar11[4] = extraout_x8_04 + 0x10U;
    pqVar11[5] = 0;
    pqVar11[6] = 0;
    pqVar11[7] = 0;
    puVar1 = *(undefined8 **)(unaff_x28 + 0x10);
    puVar25 = *(undefined8 **)(unaff_x28 + 0x18);
    uVar6 = puVar25 <= puVar1;
    uVar9 = puVar1 == puVar25;
    if (!(bool)uVar6) {
      puVar25 = puVar1 + 1;
      *puVar1 = pqVar26;
      puVar28 = puVar17;
LAB_006a079c:
      *(undefined8 **)(unaff_x28 + 0x10) = puVar25;
      *(undefined8 *)(unaff_x19 + 0x10) = puVar25[-1];
      goto LAB_006a07a8;
    }
    pqVar27 = *(qword **)(unaff_x28 + 8);
    puVar28 = (undefined1 *)((long)puVar1 - (long)pqVar27);
    uVar22 = ((long)puVar28 >> 3) + 1;
    puStack_208 = param_6;
    uStack_200 = uVar18;
    if (uVar22 >> 0x3d != 0) goto LAB_006a08ac;
    uVar21 = (long)puVar25 - (long)pqVar27;
    uVar2 = (long)uVar21 >> 2;
    if ((ulong)((long)uVar21 >> 2) <= uVar22) {
      uVar2 = uVar22;
    }
    uVar6 = 0x7ffffffffffffff7 < uVar21;
    uVar9 = uVar21 == 0x7ffffffffffffff8;
    if ((bool)uVar6) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      lVar20 = 0;
LAB_006a0764:
      puVar1 = (undefined8 *)(puVar28 + lVar20);
      pqVar15 = puVar1 + -((long)puVar28 >> 3);
      puVar25 = puVar1 + 1;
      *puVar1 = pqVar26;
      pqVar11 = pqVar15;
      _memcpy(pqVar15,pqVar27);
      *(qword **)(unaff_x28 + 8) = pqVar15;
      *(undefined8 **)(unaff_x28 + 0x10) = puVar25;
      *(ulong *)(unaff_x28 + 0x18) = lVar20 + uVar2 * 8;
      uVar18 = uStack_200;
      param_6 = puStack_208;
      if (pqVar27 != (qword *)0x0) {
        __ZdlPv();
        pqVar11 = pqVar27;
        uVar18 = uStack_200;
        param_6 = puStack_208;
      }
      goto LAB_006a079c;
    }
    if (uVar2 >> 0x3d == 0) {
      lVar20 = uVar2 << 3;
      __Znwm();
      goto LAB_006a0764;
    }
  }
  FUN_0040cee8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pqStack_150);
  func_0x006a3f28();
  pcStack_218 = FUN_006a08f8;
  pqVar11 = pqVar15;
  pqVar26 = pqVar12;
  ppuStack_220 = &puStack_c0;
  func_0x006a3cdc();
  uStack_278 = extraout_x8_05;
  FUN_00656c60(pqVar26);
  func_0x006a47d8();
  if (!(bool)uVar6 || (bool)uVar9) {
                    /* WARNING: Could not recover jumptable at 0x006a0950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(ushort *)(&UNK_00827d8c + extraout_x8_06 * 2) * 4 + 0x6a0954))();
    return pqVar26;
  }
  func_0x006a3c9c(uStack_278);
  if ((bool)uVar9) {
    return (qword *)((long)&MACH_HEADER.magic + 1);
  }
  ___stack_chk_fail();
  func_0x006a42d8();
  puVar13 = auStack_2a8;
  FUN_0077670c();
  FUN_006a1afc();
  FUN_005558a0();
  puVar28 = auStack_3b8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x006a3f28();
  pqVar27 = aqStack_530;
  pcStack_3e8 = FUN_006a1354;
  puVar14 = puVar28;
  pqVar26 = pqVar11;
  lStack_420 = unaff_x28;
  lStack_418 = unaff_x27;
  puStack_410 = puVar17;
  pqStack_408 = pqVar15;
  pqStack_400 = pqVar12;
  puStack_3f8 = puVar13;
  pppuStack_3f0 = &ppuStack_220;
  func_0x006a3d70();
  pqVar12 = (qword *)(puVar14 + 0x30);
  pqVar15 = pqVar12;
  uStack_428 = extraout_x8_07;
  FUN_00459c38();
  if (((ulong)pqVar15 & 1) == 0) {
    puVar10 = &UNK_009152fd;
    FUN_00532c74();
    pqStack_480 = (qword *)pqVar11[1];
    pqStack_488 = (qword *)*pqVar11;
    if (-1 < (char)*(byte *)((long)pqVar11 + 0x17)) {
      pqStack_480 = (qword *)(ulong)*(byte *)((long)pqVar11 + 0x17);
      pqStack_488 = pqVar11;
    }
    puVar16 = &UNK_00915308;
    puStack_458 = puVar10;
    pqStack_450 = pqVar26;
    FUN_00532c74();
    bVar5 = puVar28[0x47];
    cVar8 = (char)bVar5 < '\0';
    uVar9 = bVar5 == 0;
    cVar7 = '\0';
    uStack_4e0 = *(ulong *)(puVar28 + 0x38);
    pqStack_4e8 = *(qword **)(puVar28 + 0x30);
    if (!(bool)cVar8) {
      uStack_4e0 = (ulong)bVar5;
      pqStack_4e8 = pqVar12;
    }
    puStack_4b8 = puVar16;
    pqStack_4b0 = pqVar26;
    func_0x006a3e84();
    puStack_518 = puVar16;
    pqStack_510 = pqVar26;
    FUN_0054dd58(aqStack_530,&puStack_458,&pqStack_488,&puStack_4b8,&pqStack_4e8,&puStack_518);
    func_0x006a3cc8();
    uVar18 = extraout_x11_01;
    pqVar26 = extraout_x10;
    if (cVar8 == cVar7) {
      uVar18 = extraout_x8_08;
      pqVar26 = aqStack_530;
    }
    puVar17 = puVar28;
    FUN_0069fcc8(puVar28,pqVar26,uVar18);
    func_0x006a3f40();
  }
  else {
    puVar17 = puVar28 + 0x28;
    FUN_006abef8();
    pqVar27 = pqVar12;
  }
  func_0x006a3c9c(uStack_428);
  if ((bool)uVar9) {
    return pqVar15;
  }
  ___stack_chk_fail();
  func_0x006a3d90();
  func_0x006a3f28();
  pcStack_538 = FUN_006a1470;
  puStack_550 = puVar28;
  pqStack_548 = pqVar15;
  ppppuStack_540 = &pppuStack_3f0;
  func_0x006a47c4(pqVar26);
  piVar23 = (int *)(puVar17 + 0x28);
  iVar4 = *piVar23;
  uStack_558 = extraout_x9;
  if (iVar4 == 2) {
LAB_006a1508:
    uVar9 = 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (extraout_x8_09,pqVar15 + 6);
    func_0x006a4494();
    pqVar12 = (qword *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (((*(byte *)(pqVar15 + 0x1d) & 1) == 0) && ((*(byte *)((long)pqVar15 + 0xe5) & 1) == 0)) {
      if ((iVar4 == 3) && ((*(byte *)((long)pqVar15 + 0xe6) & 1) != 0)) goto LAB_006a1508;
    }
    else if (iVar4 == 3) goto LAB_006a1508;
    uVar9 = iVar4 == 3;
    puVar10 = &UNK_009150c9;
    FUN_00532c74();
    puStack_588 = puVar10;
    pqStack_580 = pqVar26;
    func_0x006a3cf0();
    func_0x006a4020();
    func_0x006a3c84();
    func_0x006a3f94();
    func_0x006a3f40();
    pqVar12 = (qword *)0x0;
    piVar23 = aiStack_5d0;
  }
  func_0x006a3c9c(uStack_558);
  if ((bool)uVar9) {
    return pqVar12;
  }
  ___stack_chk_fail();
  func_0x006a3d90();
  func_0x006a3f28();
  pcStack_5d8 = FUN_006a154c;
  pqStack_600 = pqVar11;
  pqStack_5f8 = pqVar27;
  piStack_5f0 = piVar23;
  pqStack_5e8 = pqVar15;
  pppppuStack_5e0 = &ppppuStack_540;
  func_0x006a43a8();
  func_0x006a4374();
  func_0x006a460c();
  func_0x006a3f80();
  if (((ulong)pqVar12 & 1) == 0) {
    func_0x006a4374();
    FUN_006a1354(piVar23,auStack_618);
    func_0x006a3f80();
    if (((ulong)piVar23 & 1) == 0) {
      return (qword *)0x0;
    }
    pcVar19 = "}";
  }
  else {
    pcVar19 = ">";
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(pqVar15,pcVar19);
  return (qword *)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 006a059c; end: 006a08f7;  */

qword ** FUN_006a059c(undefined8 param_1,undefined8 param_2,uint param_3,qword *param_4,
                     undefined8 param_5,undefined1 *param_6,qword **param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  byte bVar5;
  char in_NG;
  undefined1 in_ZR;
  undefined1 uVar6;
  undefined1 in_CY;
  char in_OV;
  char cVar7;
  char cVar8;
  qword *pqVar9;
  qword **ppqVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  qword **ppqVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  char *pcVar17;
  undefined8 extraout_x8;
  long lVar18;
  long extraout_x8_00;
  undefined1 *extraout_x8_01;
  long extraout_x8_02;
  ulong uVar19;
  undefined8 extraout_x8_03;
  long extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined8 extraout_x9;
  qword **extraout_x10;
  undefined1 *extraout_x11;
  undefined8 extraout_x11_00;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong uVar20;
  long extraout_x13;
  qword **extraout_x14;
  long unaff_x19;
  qword **ppqVar21;
  int *piVar22;
  undefined8 *puVar23;
  qword **ppqVar24;
  qword **ppqVar25;
  qword *pqVar26;
  undefined1 *puVar27;
  qword *pqVar28;
  long unaff_x27;
  long unaff_x28;
  undefined1 auStack_568 [24];
  qword **ppqStack_550;
  qword **ppqStack_548;
  int *piStack_540;
  qword **ppqStack_538;
  undefined1 ****ppppuStack_530;
  code *pcStack_528;
  int aiStack_520 [18];
  undefined *puStack_4d8;
  qword **ppqStack_4d0;
  undefined8 uStack_4a8;
  undefined1 *puStack_4a0;
  qword **ppqStack_498;
  undefined1 ***pppuStack_490;
  code *pcStack_488;
  qword *apqStack_480 [3];
  undefined *puStack_468;
  qword **ppqStack_460;
  qword **ppqStack_438;
  ulong uStack_430;
  undefined *puStack_408;
  qword **ppqStack_400;
  qword **ppqStack_3d8;
  qword *pqStack_3d0;
  undefined *puStack_3a8;
  qword **ppqStack_3a0;
  undefined8 uStack_378;
  long lStack_370;
  long lStack_368;
  undefined1 *puStack_360;
  qword **ppqStack_358;
  qword **ppqStack_350;
  undefined1 *puStack_348;
  undefined1 **ppuStack_340;
  code *pcStack_338;
  undefined1 auStack_308 [272];
  undefined1 auStack_1f8 [48];
  undefined8 uStack_1c8;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined1 *puStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [23];
  undefined1 uStack_101;
  qword **ppqStack_100;
  ulong uStack_f8;
  qword *apqStack_d0 [6];
  qword *pqStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_70;
  
  func_0x006a3cdc();
  uStack_70 = extraout_x8;
  func_0x006a4238();
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x006a4224();
    uVar20 = (ulong)*(uint *)(unaff_x19 + 0xec);
    ppqVar10 = apqStack_d0;
    pqStack_a0 = param_4;
    uStack_98 = param_5;
    func_0x0066741c();
    func_0x006a4218();
    ppqVar13 = apqStack_d0;
    ppqStack_100 = ppqVar10;
    uStack_f8 = uVar20;
    FUN_00575ddc(auStack_118,&pqStack_a0,ppqVar13,&ppqStack_100);
    func_0x006a3f88(uStack_101);
    puVar16 = extraout_x11;
    if (in_NG == in_OV) {
      puVar16 = extraout_x8_01;
    }
    func_0x006a3f94();
    func_0x006a4570();
    ppqVar21 = (qword **)0x0;
    ppqVar10 = param_7;
LAB_006a0878:
    func_0x006a3c9c(uStack_70);
    if ((bool)in_ZR) {
      return ppqVar21;
    }
    ___stack_chk_fail();
LAB_006a08ac:
    func_0x0069e7cc();
  }
  else {
    unaff_x27 = *(long *)(unaff_x19 + 0x10);
    puVar27 = param_6;
    ppqVar10 = param_7;
    if (unaff_x27 == 0) {
LAB_006a07a8:
      pqStack_a0 = (qword *)0x0;
      uStack_98 = 0;
      uStack_90 = 0;
      ppqVar13 = &pqStack_a0;
      func_0x006a45e4();
      if (((ulong)param_4 & 1) == 0) {
LAB_006a086c:
        ppqVar21 = (qword **)0x0;
      }
      else {
        ppqVar10 = *(qword ***)(unaff_x19 + 8);
        if (ppqVar10 == (qword **)0x0) {
          ppqVar10 = (qword **)0x0;
        }
        else {
          (*(code *)(*ppqVar10)[5])(ppqVar10,param_7);
        }
        if ((*(byte *)((long)param_7 + 1) >> 5 & 1) == 0) {
          FUN_0068dd94(param_6,param_5,param_7);
          uVar20 = 0;
          ppqVar13 = &pqStack_a0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
          puVar27 = auStack_148;
          func_0x006a411c();
          FUN_006a15e0();
          puVar16 = auStack_148;
        }
        else {
          FUN_0068e1d0(param_6,param_5,param_7);
          uVar20 = 0;
          ppqVar13 = &pqStack_a0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
          puVar27 = auStack_130;
          func_0x006a411c();
          FUN_006a15e0();
          puVar16 = auStack_130;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar16);
        if ((uVar20 & 1) == 0) goto LAB_006a086c;
        func_0x006a4208();
        *(long *)(unaff_x19 + 0x10) = unaff_x27;
        ppqVar21 = (qword **)((long)&MACH_HEADER.magic + 1);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      puVar16 = puVar27;
      goto LAB_006a0878;
    }
    ppqVar25 = (qword **)(unaff_x27 + 0x20);
    Hint_Prefetch(*ppqVar25,0,2,0);
    ppqVar21 = param_7;
    puVar16 = param_6;
    FUN_006a2340(*ppqVar25);
    lVar18 = 0;
    ppqVar13 = ppqVar21;
    while( true ) {
      func_0x006a4520(lVar18);
      uVar20 = extraout_x12;
      while (uVar20 != 0) {
        func_0x006a4744();
        lVar18 = extraout_x13;
        if (extraout_x14 == param_7) goto LAB_006a06d0;
        uVar20 = extraout_x12_00 - 1 & extraout_x12_00;
      }
      func_0x006a4538();
      if ((param_3 & 1) != 0) break;
      lVar18 = extraout_x8_00 + 8;
    }
    FUN_006a3030();
    puVar1 = (undefined8 *)(*(long *)(unaff_x27 + 0x28) + (long)ppqVar25 * 0x20);
    *puVar1 = param_7;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    lVar18 = *(long *)(unaff_x27 + 0x28);
    ppqVar21 = ppqVar25;
LAB_006a06d0:
    unaff_x28 = lVar18 + (long)ppqVar21 * 0x20;
    pqVar9 = &segment_command_00000020.vmsize;
    __Znwm();
    param_4 = pqVar9;
    func_0x006a470c();
    param_4[2] = 0;
    param_4[3] = 0;
    *param_4 = extraout_x8_02 + 0x10U;
    param_4[1] = 0;
    param_4[4] = extraout_x8_02 + 0x10U;
    param_4[5] = 0;
    param_4[6] = 0;
    param_4[7] = 0;
    puVar1 = *(undefined8 **)(unaff_x28 + 0x10);
    puVar23 = *(undefined8 **)(unaff_x28 + 0x18);
    in_CY = puVar23 <= puVar1;
    in_ZR = puVar1 == puVar23;
    if (!(bool)in_CY) {
      puVar23 = puVar1 + 1;
      *puVar1 = pqVar9;
      puVar27 = puVar16;
LAB_006a079c:
      *(undefined8 **)(unaff_x28 + 0x10) = puVar23;
      *(undefined8 *)(unaff_x19 + 0x10) = puVar23[-1];
      goto LAB_006a07a8;
    }
    pqVar26 = *(qword **)(unaff_x28 + 8);
    puVar27 = (undefined1 *)((long)puVar1 - (long)pqVar26);
    uVar20 = ((long)puVar27 >> 3) + 1;
    puStack_158 = param_6;
    uStack_150 = param_5;
    if (uVar20 >> 0x3d != 0) goto LAB_006a08ac;
    uVar19 = (long)puVar23 - (long)pqVar26;
    uVar2 = (long)uVar19 >> 2;
    if ((ulong)((long)uVar19 >> 2) <= uVar20) {
      uVar2 = uVar20;
    }
    in_CY = 0x7ffffffffffffff7 < uVar19;
    in_ZR = uVar19 == 0x7ffffffffffffff8;
    if ((bool)in_CY) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      lVar18 = 0;
LAB_006a0764:
      puVar1 = (undefined8 *)(puVar27 + lVar18);
      pqVar28 = puVar1 + -((long)puVar27 >> 3);
      puVar23 = puVar1 + 1;
      *puVar1 = pqVar9;
      param_4 = pqVar28;
      _memcpy(pqVar28,pqVar26);
      *(qword **)(unaff_x28 + 8) = pqVar28;
      *(undefined8 **)(unaff_x28 + 0x10) = puVar23;
      *(ulong *)(unaff_x28 + 0x18) = lVar18 + uVar2 * 8;
      param_5 = uStack_150;
      param_6 = puStack_158;
      if (pqVar26 != (qword *)0x0) {
        __ZdlPv();
        param_4 = pqVar26;
        param_5 = uStack_150;
        param_6 = puStack_158;
      }
      goto LAB_006a079c;
    }
    if (uVar2 >> 0x3d == 0) {
      lVar18 = uVar2 << 3;
      __Znwm();
      goto LAB_006a0764;
    }
  }
  FUN_0040cee8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_130);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pqStack_a0);
  func_0x006a3f28();
  pcStack_168 = FUN_006a08f8;
  ppqVar21 = ppqVar13;
  ppqVar25 = ppqVar10;
  puStack_170 = &stack0xfffffffffffffff0;
  func_0x006a3cdc();
  uStack_1c8 = extraout_x8_03;
  FUN_00656c60(ppqVar25);
  func_0x006a47d8();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x006a0950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(ushort *)(&UNK_00827d8c + extraout_x8_04 * 2) * 4 + 0x6a0954))();
    return ppqVar25;
  }
  func_0x006a3c9c(uStack_1c8);
  if ((bool)in_ZR) {
    return (qword **)((long)&MACH_HEADER.magic + 1);
  }
  ___stack_chk_fail();
  func_0x006a42d8();
  puVar11 = auStack_1f8;
  FUN_0077670c();
  FUN_006a1afc();
  FUN_005558a0();
  puVar27 = auStack_308;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x006a3f28();
  ppqVar24 = apqStack_480;
  pcStack_338 = FUN_006a1354;
  puVar12 = puVar27;
  ppqVar25 = ppqVar21;
  lStack_370 = unaff_x28;
  lStack_368 = unaff_x27;
  puStack_360 = puVar16;
  ppqStack_358 = ppqVar13;
  ppqStack_350 = ppqVar10;
  puStack_348 = puVar11;
  ppuStack_340 = &puStack_170;
  func_0x006a3d70();
  ppqVar10 = (qword **)(puVar12 + 0x30);
  ppqVar13 = ppqVar10;
  uStack_378 = extraout_x8_05;
  FUN_00459c38();
  if (((ulong)ppqVar13 & 1) == 0) {
    puVar14 = &UNK_009152fd;
    FUN_00532c74();
    pqStack_3d0 = ppqVar21[1];
    ppqStack_3d8 = (qword **)*ppqVar21;
    if (-1 < (char)*(byte *)((long)ppqVar21 + 0x17)) {
      pqStack_3d0 = (qword *)(ulong)*(byte *)((long)ppqVar21 + 0x17);
      ppqStack_3d8 = ppqVar21;
    }
    puVar15 = &UNK_00915308;
    puStack_3a8 = puVar14;
    ppqStack_3a0 = ppqVar25;
    FUN_00532c74();
    bVar5 = puVar27[0x47];
    cVar8 = (char)bVar5 < '\0';
    in_ZR = bVar5 == 0;
    cVar7 = '\0';
    uStack_430 = *(ulong *)(puVar27 + 0x38);
    ppqStack_438 = *(qword ***)(puVar27 + 0x30);
    if (!(bool)cVar8) {
      uStack_430 = (ulong)bVar5;
      ppqStack_438 = ppqVar10;
    }
    puStack_408 = puVar15;
    ppqStack_400 = ppqVar25;
    func_0x006a3e84();
    puStack_468 = puVar15;
    ppqStack_460 = ppqVar25;
    FUN_0054dd58(apqStack_480,&puStack_3a8,&ppqStack_3d8,&puStack_408,&ppqStack_438,&puStack_468);
    func_0x006a3cc8();
    uVar3 = extraout_x11_00;
    ppqVar25 = extraout_x10;
    if (cVar8 == cVar7) {
      uVar3 = extraout_x8_06;
      ppqVar25 = apqStack_480;
    }
    puVar16 = puVar27;
    FUN_0069fcc8(puVar27,ppqVar25,uVar3);
    func_0x006a3f40();
  }
  else {
    puVar16 = puVar27 + 0x28;
    FUN_006abef8();
    ppqVar24 = ppqVar10;
  }
  func_0x006a3c9c(uStack_378);
  if ((bool)in_ZR) {
    return ppqVar13;
  }
  ___stack_chk_fail();
  func_0x006a3d90();
  func_0x006a3f28();
  pcStack_488 = FUN_006a1470;
  puStack_4a0 = puVar27;
  ppqStack_498 = ppqVar13;
  pppuStack_490 = &ppuStack_340;
  func_0x006a47c4(ppqVar25);
  piVar22 = (int *)(puVar16 + 0x28);
  iVar4 = *piVar22;
  uStack_4a8 = extraout_x9;
  if (iVar4 == 2) {
LAB_006a1508:
    uVar6 = 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (extraout_x8_07,ppqVar13 + 6);
    func_0x006a4494();
    ppqVar10 = (qword **)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if ((((ulong)ppqVar13[0x1d] & 1) == 0) && ((*(byte *)((long)ppqVar13 + 0xe5) & 1) == 0)) {
      if ((iVar4 == 3) && ((*(byte *)((long)ppqVar13 + 0xe6) & 1) != 0)) goto LAB_006a1508;
    }
    else if (iVar4 == 3) goto LAB_006a1508;
    uVar6 = iVar4 == 3;
    puVar14 = &UNK_009150c9;
    FUN_00532c74();
    puStack_4d8 = puVar14;
    ppqStack_4d0 = ppqVar25;
    func_0x006a3cf0();
    func_0x006a4020();
    func_0x006a3c84();
    func_0x006a3f94();
    func_0x006a3f40();
    ppqVar10 = (qword **)0x0;
    piVar22 = aiStack_520;
  }
  func_0x006a3c9c(uStack_4a8);
  if ((bool)uVar6) {
    return ppqVar10;
  }
  ___stack_chk_fail();
  func_0x006a3d90();
  func_0x006a3f28();
  pcStack_528 = FUN_006a154c;
  ppqStack_550 = ppqVar21;
  ppqStack_548 = ppqVar24;
  piStack_540 = piVar22;
  ppqStack_538 = ppqVar13;
  ppppuStack_530 = &pppuStack_490;
  func_0x006a43a8();
  func_0x006a4374();
  func_0x006a460c();
  func_0x006a3f80();
  if (((ulong)ppqVar10 & 1) == 0) {
    func_0x006a4374();
    FUN_006a1354(piVar22,auStack_568);
    func_0x006a3f80();
    if (((ulong)piVar22 & 1) == 0) {
      return (qword **)0x0;
    }
    pcVar17 = "}";
  }
  else {
    pcVar17 = ">";
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(ppqVar13,pcVar17);
  return (qword **)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 006a08f8; end: 006a1353;  */

undefined1 *
FUN_006a08f8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  byte bVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  undefined1 in_CY;
  char cVar5;
  char cVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  char *pcVar14;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x9;
  undefined8 *extraout_x10;
  undefined8 extraout_x11;
  int *piVar15;
  undefined8 *puVar16;
  undefined1 auStack_408 [24];
  undefined8 *puStack_3f0;
  undefined1 *puStack_3e8;
  int *piStack_3e0;
  undefined1 *puStack_3d8;
  undefined1 ***pppuStack_3d0;
  code *pcStack_3c8;
  int aiStack_3c0 [18];
  undefined *puStack_378;
  undefined8 *puStack_370;
  undefined8 uStack_348;
  undefined1 *puStack_340;
  undefined1 *puStack_338;
  undefined1 **ppuStack_330;
  code *pcStack_328;
  undefined8 auStack_320 [3];
  undefined *puStack_308;
  undefined8 *puStack_300;
  undefined1 *puStack_2d8;
  ulong uStack_2d0;
  undefined *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_278;
  ulong uStack_270;
  undefined *puStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_218;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined1 auStack_1a8 [320];
  undefined8 uStack_68;
  
  func_0x006a3cdc();
  uStack_68 = extraout_x8;
  FUN_00656c60(param_4);
  func_0x006a47d8();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x006a0950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(ushort *)(&UNK_00827d8c + extraout_x8_00 * 2) * 4 + 0x6a0954))();
    return param_4;
  }
  func_0x006a3c9c(uStack_68);
  if ((bool)in_ZR) {
    return (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  ___stack_chk_fail();
  func_0x006a42d8();
  FUN_0077670c();
  FUN_006a1afc();
  FUN_005558a0();
  puVar12 = auStack_1a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x006a3f28();
  puVar16 = auStack_320;
  pcStack_1d8 = FUN_006a1354;
  puVar7 = puVar12;
  puVar13 = param_2;
  puStack_1e0 = &stack0xfffffffffffffff0;
  func_0x006a3d70();
  puVar7 = puVar7 + 0x30;
  puVar8 = puVar7;
  uStack_218 = extraout_x8_01;
  FUN_00459c38();
  if (((ulong)puVar8 & 1) == 0) {
    puVar9 = &UNK_009152fd;
    FUN_00532c74();
    uStack_270 = param_2[1];
    puStack_278 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uStack_270 = (ulong)*(byte *)((long)param_2 + 0x17);
      puStack_278 = param_2;
    }
    puVar10 = &UNK_00915308;
    puStack_248 = puVar9;
    puStack_240 = puVar13;
    FUN_00532c74();
    bVar3 = puVar12[0x47];
    cVar6 = (char)bVar3 < '\0';
    in_ZR = bVar3 == 0;
    cVar5 = '\0';
    uStack_2d0 = *(ulong *)(puVar12 + 0x38);
    puStack_2d8 = *(undefined1 **)(puVar12 + 0x30);
    if (!(bool)cVar6) {
      uStack_2d0 = (ulong)bVar3;
      puStack_2d8 = puVar7;
    }
    puStack_2a8 = puVar10;
    puStack_2a0 = puVar13;
    func_0x006a3e84();
    puStack_308 = puVar10;
    puStack_300 = puVar13;
    FUN_0054dd58(auStack_320,&puStack_248,&puStack_278,&puStack_2a8,&puStack_2d8,&puStack_308);
    func_0x006a3cc8();
    uVar1 = extraout_x11;
    puVar13 = extraout_x10;
    if (cVar6 == cVar5) {
      uVar1 = extraout_x8_02;
      puVar13 = auStack_320;
    }
    puVar11 = puVar12;
    FUN_0069fcc8(puVar12,puVar13,uVar1);
    func_0x006a3f40();
  }
  else {
    puVar11 = puVar12 + 0x28;
    FUN_006abef8();
    puVar16 = (undefined8 *)puVar7;
  }
  func_0x006a3c9c(uStack_218);
  if ((bool)in_ZR) {
    return puVar8;
  }
  ___stack_chk_fail();
  func_0x006a3d90();
  func_0x006a3f28();
  pcStack_328 = FUN_006a1470;
  puStack_340 = puVar12;
  puStack_338 = puVar8;
  ppuStack_330 = &puStack_1e0;
  func_0x006a47c4(puVar13);
  piVar15 = (int *)(puVar11 + 0x28);
  iVar2 = *piVar15;
  uStack_348 = extraout_x9;
  if (iVar2 == 2) {
LAB_006a1508:
    uVar4 = 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (extraout_x8_03,puVar8 + 0x30);
    func_0x006a4494();
    puVar12 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (((puVar8[0xe8] & 1) == 0) && ((puVar8[0xe5] & 1) == 0)) {
      if ((iVar2 == 3) && ((puVar8[0xe6] & 1) != 0)) goto LAB_006a1508;
    }
    else if (iVar2 == 3) goto LAB_006a1508;
    uVar4 = iVar2 == 3;
    puVar9 = &UNK_009150c9;
    FUN_00532c74();
    puStack_378 = puVar9;
    puStack_370 = puVar13;
    func_0x006a3cf0();
    func_0x006a4020();
    func_0x006a3c84();
    func_0x006a3f94();
    func_0x006a3f40();
    puVar12 = (undefined1 *)0x0;
    piVar15 = aiStack_3c0;
  }
  func_0x006a3c9c(uStack_348);
  if ((bool)uVar4) {
    return puVar12;
  }
  ___stack_chk_fail();
  func_0x006a3d90();
  func_0x006a3f28();
  pcStack_3c8 = FUN_006a154c;
  puStack_3f0 = param_2;
  puStack_3e8 = (undefined1 *)puVar16;
  piStack_3e0 = piVar15;
  puStack_3d8 = puVar8;
  pppuStack_3d0 = &ppuStack_330;
  func_0x006a43a8();
  func_0x006a4374();
  func_0x006a460c();
  func_0x006a3f80();
  if (((ulong)puVar12 & 1) == 0) {
    func_0x006a4374();
    FUN_006a1354(piVar15,auStack_408);
    func_0x006a3f80();
    if (((ulong)piVar15 & 1) == 0) {
      return (undefined1 *)0x0;
    }
    pcVar14 = "}";
  }
  else {
    pcVar14 = ">";
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(puVar8,pcVar14);
  return (undefined1 *)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 006a1354; end: 006a146f;  */

undefined1 * FUN_006a1354(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  byte bVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  char *pcVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x9;
  undefined8 *extraout_x10;
  undefined8 extraout_x11;
  int *piVar14;
  undefined8 *puVar15;
  undefined1 auStack_238 [24];
  undefined8 *puStack_220;
  undefined1 *puStack_218;
  int *piStack_210;
  undefined1 *puStack_208;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  int aiStack_1f0 [18];
  undefined *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_178;
  long lStack_170;
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 auStack_150 [3];
  undefined *puStack_138;
  undefined8 *puStack_130;
  undefined1 *puStack_108;
  ulong uStack_100;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_a8;
  ulong uStack_a0;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_48;
  
  puVar15 = auStack_150;
  lVar7 = param_1;
  puVar12 = param_2;
  func_0x006a3d70();
  puVar11 = (undefined1 *)(lVar7 + 0x30);
  puVar8 = puVar11;
  uStack_48 = extraout_x8;
  FUN_00459c38();
  if (((ulong)puVar8 & 1) == 0) {
    puVar9 = &UNK_009152fd;
    FUN_00532c74();
    uStack_a0 = param_2[1];
    puStack_a8 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uStack_a0 = (ulong)*(byte *)((long)param_2 + 0x17);
      puStack_a8 = param_2;
    }
    puVar10 = &UNK_00915308;
    puStack_78 = puVar9;
    puStack_70 = puVar12;
    FUN_00532c74();
    bVar3 = *(byte *)(param_1 + 0x47);
    cVar6 = (char)bVar3 < '\0';
    in_ZR = bVar3 == 0;
    cVar5 = '\0';
    uStack_100 = *(ulong *)(param_1 + 0x38);
    puStack_108 = *(undefined1 **)(param_1 + 0x30);
    if (!(bool)cVar6) {
      uStack_100 = (ulong)bVar3;
      puStack_108 = puVar11;
    }
    puStack_d8 = puVar10;
    puStack_d0 = puVar12;
    func_0x006a3e84();
    puStack_138 = puVar10;
    puStack_130 = puVar12;
    FUN_0054dd58(auStack_150,&puStack_78,&puStack_a8,&puStack_d8,&puStack_108,&puStack_138);
    func_0x006a3cc8();
    uVar1 = extraout_x11;
    puVar12 = extraout_x10;
    if (cVar6 == cVar5) {
      uVar1 = extraout_x8_00;
      puVar12 = auStack_150;
    }
    lVar7 = param_1;
    FUN_0069fcc8(param_1,puVar12,uVar1);
    func_0x006a3f40();
  }
  else {
    lVar7 = param_1 + 0x28;
    FUN_006abef8();
    puVar15 = (undefined8 *)puVar11;
  }
  func_0x006a3c9c(uStack_48);
  if ((bool)in_ZR) {
    return puVar8;
  }
  ___stack_chk_fail();
  func_0x006a3d90();
  func_0x006a3f28();
  pcStack_158 = FUN_006a1470;
  lStack_170 = param_1;
  puStack_168 = puVar8;
  puStack_160 = &stack0xfffffffffffffff0;
  func_0x006a47c4(puVar12);
  piVar14 = (int *)(lVar7 + 0x28);
  iVar2 = *piVar14;
  uStack_178 = extraout_x9;
  if (iVar2 == 2) {
LAB_006a1508:
    uVar4 = 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (extraout_x8_01,puVar8 + 0x30);
    func_0x006a4494();
    puVar11 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (((puVar8[0xe8] & 1) == 0) && ((puVar8[0xe5] & 1) == 0)) {
      if ((iVar2 == 3) && ((puVar8[0xe6] & 1) != 0)) goto LAB_006a1508;
    }
    else if (iVar2 == 3) goto LAB_006a1508;
    uVar4 = iVar2 == 3;
    puVar9 = &UNK_009150c9;
    FUN_00532c74();
    puStack_1a8 = puVar9;
    puStack_1a0 = puVar12;
    func_0x006a3cf0();
    func_0x006a4020();
    func_0x006a3c84();
    func_0x006a3f94();
    func_0x006a3f40();
    puVar11 = (undefined1 *)0x0;
    piVar14 = aiStack_1f0;
  }
  func_0x006a3c9c(uStack_178);
  if ((bool)uVar4) {
    return puVar11;
  }
  ___stack_chk_fail();
  func_0x006a3d90();
  func_0x006a3f28();
  pcStack_1f8 = FUN_006a154c;
  puStack_220 = param_2;
  puStack_218 = (undefined1 *)puVar15;
  piStack_210 = piVar14;
  puStack_208 = puVar8;
  ppuStack_200 = &puStack_160;
  func_0x006a43a8();
  func_0x006a4374();
  func_0x006a460c();
  func_0x006a3f80();
  if (((ulong)puVar11 & 1) == 0) {
    func_0x006a4374();
    FUN_006a1354(piVar14,auStack_238);
    func_0x006a3f80();
    if (((ulong)piVar14 & 1) == 0) {
      return (undefined1 *)0x0;
    }
    pcVar13 = "}";
  }
  else {
    pcVar13 = ">";
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(puVar8,pcVar13);
  return (undefined1 *)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 006a1470; end: 006a154b;  */

ulong FUN_006a1470(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long unaff_x19;
  int *piVar5;
  undefined1 auStack_e8 [24];
  int aiStack_a0 [18];
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_28;
  
  func_0x006a47c4(param_2);
  piVar5 = (int *)(param_1 + 0x28);
  iVar1 = *piVar5;
  uStack_28 = extraout_x9;
  if (iVar1 == 2) {
LAB_006a1508:
    uVar2 = 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (extraout_x8,unaff_x19 + 0x30);
    func_0x006a4494();
    uVar4 = 1;
  }
  else {
    if (((*(byte *)(unaff_x19 + 0xe8) & 1) == 0) && ((*(byte *)(unaff_x19 + 0xe5) & 1) == 0)) {
      if ((iVar1 == 3) && ((*(byte *)(unaff_x19 + 0xe6) & 1) != 0)) goto LAB_006a1508;
    }
    else if (iVar1 == 3) goto LAB_006a1508;
    uVar2 = iVar1 == 3;
    puVar3 = &UNK_009150c9;
    FUN_00532c74();
    puStack_58 = puVar3;
    uStack_50 = param_2;
    func_0x006a3cf0();
    func_0x006a4020();
    func_0x006a3c84();
    func_0x006a3f94();
    func_0x006a3f40();
    uVar4 = 0;
    piVar5 = aiStack_a0;
  }
  func_0x006a3c9c(uStack_28);
  if ((bool)uVar2) {
    return uVar4;
  }
  ___stack_chk_fail();
  func_0x006a3d90();
  func_0x006a3f28();
  func_0x006a43a8();
  func_0x006a4374();
  func_0x006a460c();
  func_0x006a3f80();
  if ((uVar4 & 1) == 0) {
    func_0x006a4374();
    FUN_006a1354(piVar5,auStack_e8);
    func_0x006a3f80();
    if (((ulong)piVar5 & 1) == 0) {
      return 0;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
  return 1;
}



/* Entry: 006a154c; end: 006a15df;  */

undefined8 FUN_006a154c(ulong param_1)

{
  ulong unaff_x20;
  
  func_0x006a43a8();
  func_0x006a4374();
  func_0x006a460c();
  func_0x006a3f80();
  if ((param_1 & 1) == 0) {
    func_0x006a4374();
    FUN_006a1354();
    func_0x006a3f80();
    if ((unaff_x20 & 1) == 0) {
      return 0;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
  return 1;
}



/* Entry: 006a15e0; end: 006a1683;  */

void FUN_006a15e0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  while( true ) {
    func_0x006a442c(auStack_58);
    uVar1 = param_1 + 0x30;
    FUN_00459c38(uVar1,auStack_58);
    if ((uVar1 & 1) != 0) break;
    func_0x006a4464(auStack_70);
    uVar1 = param_1 + 0x30;
    FUN_00459c38(uVar1,auStack_70);
    uVar2 = uVar1;
    func_0x006a3f40();
    func_0x006a40f8();
    if ((uVar1 & 1) != 0) goto LAB_006a1668;
    func_0x006a47b8();
    FUN_0069eba4();
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  func_0x006a40f8();
LAB_006a1668:
  func_0x006a4188();
  FUN_006a1354();
  return;
}



/* Entry: 006a1684; end: 006a16e7;  */

void FUN_006a1684(int param_1)

{
  long lVar1;
  long *unaff_x19;
  ulong unaff_x20;
  undefined8 uStack_48;
  
  func_0x006a43a8();
  func_0x006a476c();
  func_0x006a4374();
  func_0x006a460c();
  func_0x006a3f80();
  FUN_006a16e8();
  if ((unaff_x20 & 1) != 0) {
    lVar1 = -uStack_48;
    if (param_1 == 0) {
      lVar1 = uStack_48;
    }
    *unaff_x19 = lVar1;
  }
  return;
}



/* Entry: 006a16e8; end: 006a1813;  */

char ***** FUN_006a16e8(double param_1,long param_2,double *param_3,double *param_4)

{
  ulong uVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  char *****pppppcVar10;
  char *****pppppcVar11;
  char *****pppppcVar12;
  uint uVar13;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  double dVar14;
  char *****extraout_x8_01;
  ulong extraout_x8_02;
  undefined8 extraout_x9;
  ulong extraout_x10;
  ulong extraout_x10_00;
  char *****extraout_x10_01;
  ulong extraout_x11;
  ulong extraout_x12;
  long unaff_x19;
  undefined1 auStack_1b8 [24];
  char ****ppppcStack_1a0;
  ulong uStack_198;
  byte bStack_189;
  char ****ppppcStack_188;
  ulong uStack_180;
  char ****ppppcStack_158;
  char ****ppppcStack_150;
  undefined8 uStack_128;
  undefined *apuStack_e0 [3];
  undefined *puStack_c8;
  double *pdStack_c0;
  undefined1 uStack_b1;
  ulong uStack_98;
  undefined *puStack_68;
  double *pdStack_60;
  undefined8 uStack_38;
  
  ppuVar9 = apuStack_e0;
  func_0x006a47c4();
  iVar2 = *(int *)(param_2 + 0x28);
  cVar4 = SBORROW4(iVar2,3);
  cVar5 = iVar2 + -3 < 0;
  uVar6 = iVar2 == 3;
  uStack_38 = extraout_x9;
  if ((bool)uVar6) {
    uVar1 = unaff_x19 + 0x30;
    uVar7 = uVar1;
    FUN_006ac4a4(uVar1,param_4,param_3);
    if ((uVar7 & 1) == 0) {
      puVar8 = &UNK_009152b0;
      FUN_00532c74();
      puStack_68 = puVar8;
      pdStack_60 = param_4;
      func_0x006a41f4();
      uStack_98 = extraout_x10;
      if (cVar5 == cVar4) {
        uStack_98 = uVar1;
      }
      puVar8 = &UNK_00910052;
      FUN_00532c74();
      puStack_c8 = puVar8;
      pdStack_c0 = param_4;
      func_0x006a40a0();
      func_0x006a4554(&puStack_68);
      func_0x006a3c84();
      func_0x006a3f94();
      param_3 = param_4;
      goto LAB_006a17d4;
    }
    FUN_006abef8((int *)(param_2 + 0x28));
    pppppcVar12 = (char *****)((long)&MACH_HEADER.magic + 1);
    param_3 = param_4;
  }
  else {
    puVar8 = &UNK_00915298;
    FUN_00532c74();
    puStack_68 = puVar8;
    pdStack_60 = param_3;
    func_0x006a3cf0();
    uStack_98 = extraout_x8;
    func_0x006a42fc();
    func_0x006a3f88(uStack_b1);
    func_0x006a3f94();
    ppuVar9 = &puStack_c8;
LAB_006a17d4:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar9);
    pppppcVar12 = (char *****)0x0;
  }
  func_0x006a3c9c(uStack_38,pppppcVar12);
  if ((bool)uVar6) {
    return pppppcVar12;
  }
  ___stack_chk_fail();
  func_0x006a4008();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x006a3f28();
  func_0x006a3cdc();
  uStack_128 = extraout_x8_00;
  func_0x006a476c();
  pppppcVar12 = &ppppcStack_158;
  FUN_00425cb4();
  pppppcVar11 = &ppppcStack_158;
  func_0x006a3fb4();
  pppppcVar10 = &ppppcStack_158;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  iVar2 = *(int *)(unaff_x19 + 0x28);
  uVar6 = iVar2 == 2;
  if ((bool)uVar6) {
    func_0x006a4634(&ppppcStack_1a0);
    pppppcVar11 = &ppppcStack_1a0;
    func_0x00570864();
    func_0x006a45b0();
    if (((ulong)pppppcVar11 & 1) == 0) {
      pppppcVar10 = (char *****)&UNK_009151a8;
      func_0x006a45b0();
      if (((ulong)pppppcVar11 & 1) != 0) goto LAB_006a1914;
      func_0x006a4738();
      func_0x006a45b0();
      if ((int)pppppcVar11 == 0) {
        func_0x006a4690();
        uVar6 = bStack_189 == 0;
        uStack_180 = uStack_198;
        ppppcStack_188 = ppppcStack_1a0;
        if (-1 < (char)bStack_189) {
          uStack_180 = (ulong)bStack_189;
          ppppcStack_188 = (char ****)&ppppcStack_1a0;
        }
        ppppcStack_158 = (char ****)pppppcVar11;
        ppppcStack_150 = (char ****)pppppcVar10;
        func_0x006a42a4(auStack_1b8);
        func_0x006a3d9c();
        func_0x006a3f94();
        func_0x006a3f80();
        goto LAB_006a1a90;
      }
      dVar14 = NAN;
    }
    else {
LAB_006a1914:
      dVar14 = INFINITY;
    }
    *param_3 = dVar14;
    func_0x006a4544();
    func_0x006a4140();
joined_r0x006a1928:
    if ((int)pppppcVar12 != 0) {
LAB_006a188c:
      *param_3 = -*param_3;
    }
  }
  else {
    if (iVar2 != 3) {
      cVar4 = SBORROW4(iVar2,4);
      cVar5 = iVar2 + -4 < 0;
      uVar6 = iVar2 == 4;
      if (!(bool)uVar6) {
        func_0x006a4690();
        ppppcStack_158 = (char ****)pppppcVar10;
        ppppcStack_150 = (char ****)pppppcVar11;
        func_0x006a3cf0();
        uStack_180 = extraout_x12;
        if (cVar5 == cVar4) {
          uStack_180 = extraout_x10_00;
        }
        ppppcStack_188 = (char ****)extraout_x8_01;
        func_0x006a42a4(&ppppcStack_1a0);
        func_0x006a3f88(bStack_189);
        func_0x006a3f94();
LAB_006a1a90:
        func_0x006a4140();
        pppppcVar12 = (char *****)0x0;
        goto LAB_006a1a98;
      }
      FUN_006ac584(unaff_x19 + 0x30);
      *param_3 = param_1;
      func_0x006a4544();
      goto joined_r0x006a1928;
    }
    pppppcVar10 = (char *****)(unaff_x19 + 0x30);
    bVar3 = *(byte *)(unaff_x19 + 0x47);
    if ((char)bVar3 < '\0') {
      uVar6 = *(ulong *)(unaff_x19 + 0x38) == 1;
      if (1 < *(ulong *)(unaff_x19 + 0x38)) {
        uVar6 = false;
        if (*(char *)*pppppcVar10 == '0') {
          bVar3 = *(byte *)((long)*pppppcVar10 + 1);
          uVar13 = bVar3 | 0x20;
          cVar4 = SBORROW4(uVar13,0x78);
          cVar5 = (int)(uVar13 - 0x78) < 0;
          uVar6 = true;
          if (uVar13 != 0x78) {
            uVar6 = bVar3 == 0x30;
            goto joined_r0x006a19a8;
          }
          goto LAB_006a19b4;
        }
      }
    }
    else {
      uVar6 = bVar3 == 2;
      if ((1 < bVar3) && (uVar6 = false, *(char *)pppppcVar10 == '0')) {
        bVar3 = *(byte *)(unaff_x19 + 0x31);
        uVar13 = bVar3 | 0x20;
        cVar4 = SBORROW4(uVar13,0x78);
        cVar5 = (int)(uVar13 - 0x78) < 0;
        uVar6 = true;
        if (uVar13 == 0x78) {
LAB_006a19b4:
          pppppcVar12 = (char *****)&UNK_009152de;
          FUN_00532c74();
          ppppcStack_158 = (char ****)pppppcVar12;
          ppppcStack_150 = (char ****)pppppcVar11;
          func_0x006a41f4();
          uStack_180 = extraout_x11;
          ppppcStack_188 = (char ****)extraout_x10_01;
          if (cVar5 == cVar4) {
            uStack_180 = extraout_x8_02;
            ppppcStack_188 = (char ****)pppppcVar10;
          }
          func_0x006a42a4(&ppppcStack_1a0);
          func_0x006a3f88(bStack_189);
          func_0x006a3f94();
          goto LAB_006a1a90;
        }
        uVar6 = bVar3 == 0x2f;
joined_r0x006a19a8:
        if ('/' < (char)bVar3) {
          uVar13 = (uint)bVar3;
          cVar4 = SBORROW4(uVar13,0x37);
          cVar5 = (int)(uVar13 - 0x37) < 0;
          uVar6 = uVar13 == 0x37;
          if (uVar13 < 0x38) goto LAB_006a19b4;
        }
      }
    }
    pppppcVar11 = pppppcVar10;
    FUN_006ac4a4(pppppcVar10,0xffffffffffffffff,&ppppcStack_158);
    if ((int)pppppcVar11 == 0) {
      FUN_006ac584(pppppcVar10);
    }
    else {
      param_1 = (double)NEON_ucvtf(ppppcStack_158);
    }
    *param_3 = param_1;
    func_0x006a4544();
    if (((ulong)pppppcVar12 & 1) != 0) goto LAB_006a188c;
  }
  pppppcVar12 = (char *****)((long)&MACH_HEADER.magic + 1);
LAB_006a1a98:
  func_0x006a3c9c(uStack_128,pppppcVar12);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    func_0x006a3e1c();
    pppppcVar12 = &ppppcStack_1a0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppppcVar12);
    func_0x006a3f28();
    FUN_00554ab4();
    return pppppcVar12;
  }
  return pppppcVar12;
}



/* Entry: 006a1814; end: 006a1afb;  */

char ***** FUN_006a1814(double param_1,undefined8 param_2,double *param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  char *****pppppcVar6;
  char *****pppppcVar7;
  char *****pppppcVar8;
  uint uVar9;
  undefined8 extraout_x8;
  double dVar10;
  char *****extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x10;
  char *****extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x12;
  long unaff_x19;
  undefined1 auStack_d8 [24];
  char ****ppppcStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  char ****ppppcStack_a8;
  ulong uStack_a0;
  char ****ppppcStack_78;
  char ****ppppcStack_70;
  undefined8 uStack_48;
  
  func_0x006a3cdc();
  uStack_48 = extraout_x8;
  func_0x006a476c();
  pppppcVar8 = &ppppcStack_78;
  FUN_00425cb4();
  pppppcVar7 = &ppppcStack_78;
  func_0x006a3fb4();
  pppppcVar6 = &ppppcStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  iVar1 = *(int *)(unaff_x19 + 0x28);
  uVar5 = iVar1 == 2;
  if ((bool)uVar5) {
    func_0x006a4634(&ppppcStack_c0);
    pppppcVar7 = &ppppcStack_c0;
    func_0x00570864();
    func_0x006a45b0();
    if (((ulong)pppppcVar7 & 1) == 0) {
      pppppcVar6 = (char *****)&UNK_009151a8;
      func_0x006a45b0();
      if (((ulong)pppppcVar7 & 1) != 0) goto LAB_006a1914;
      func_0x006a4738();
      func_0x006a45b0();
      if ((int)pppppcVar7 == 0) {
        func_0x006a4690();
        uVar5 = bStack_a9 == 0;
        uStack_a0 = uStack_b8;
        ppppcStack_a8 = ppppcStack_c0;
        if (-1 < (char)bStack_a9) {
          uStack_a0 = (ulong)bStack_a9;
          ppppcStack_a8 = (char ****)&ppppcStack_c0;
        }
        ppppcStack_78 = (char ****)pppppcVar7;
        ppppcStack_70 = (char ****)pppppcVar6;
        func_0x006a42a4(auStack_d8);
        func_0x006a3d9c();
        func_0x006a3f94();
        func_0x006a3f80();
        goto LAB_006a1a90;
      }
      dVar10 = NAN;
    }
    else {
LAB_006a1914:
      dVar10 = INFINITY;
    }
    *param_3 = dVar10;
    func_0x006a4544();
    func_0x006a4140();
joined_r0x006a1928:
    if ((int)pppppcVar8 != 0) {
LAB_006a188c:
      *param_3 = -*param_3;
    }
  }
  else {
    if (iVar1 != 3) {
      cVar3 = SBORROW4(iVar1,4);
      cVar4 = iVar1 + -4 < 0;
      uVar5 = iVar1 == 4;
      if (!(bool)uVar5) {
        func_0x006a4690();
        ppppcStack_78 = (char ****)pppppcVar6;
        ppppcStack_70 = (char ****)pppppcVar7;
        func_0x006a3cf0();
        uStack_a0 = extraout_x12;
        if (cVar4 == cVar3) {
          uStack_a0 = extraout_x10;
        }
        ppppcStack_a8 = (char ****)extraout_x8_00;
        func_0x006a42a4(&ppppcStack_c0);
        func_0x006a3f88(bStack_a9);
        func_0x006a3f94();
LAB_006a1a90:
        func_0x006a4140();
        pppppcVar8 = (char *****)0x0;
        goto LAB_006a1a98;
      }
      FUN_006ac584(unaff_x19 + 0x30);
      *param_3 = param_1;
      func_0x006a4544();
      goto joined_r0x006a1928;
    }
    pppppcVar6 = (char *****)(unaff_x19 + 0x30);
    bVar2 = *(byte *)(unaff_x19 + 0x47);
    if ((char)bVar2 < '\0') {
      uVar5 = *(ulong *)(unaff_x19 + 0x38) == 1;
      if (1 < *(ulong *)(unaff_x19 + 0x38)) {
        uVar5 = false;
        if (*(char *)*pppppcVar6 == '0') {
          bVar2 = *(byte *)((long)*pppppcVar6 + 1);
          uVar9 = bVar2 | 0x20;
          cVar3 = SBORROW4(uVar9,0x78);
          cVar4 = (int)(uVar9 - 0x78) < 0;
          uVar5 = true;
          if (uVar9 != 0x78) {
            uVar5 = bVar2 == 0x30;
            goto joined_r0x006a19a8;
          }
          goto LAB_006a19b4;
        }
      }
    }
    else {
      uVar5 = bVar2 == 2;
      if ((1 < bVar2) && (uVar5 = false, *(char *)pppppcVar6 == '0')) {
        bVar2 = *(byte *)(unaff_x19 + 0x31);
        uVar9 = bVar2 | 0x20;
        cVar3 = SBORROW4(uVar9,0x78);
        cVar4 = (int)(uVar9 - 0x78) < 0;
        uVar5 = true;
        if (uVar9 == 0x78) {
LAB_006a19b4:
          pppppcVar8 = (char *****)&UNK_009152de;
          FUN_00532c74();
          ppppcStack_78 = (char ****)pppppcVar8;
          ppppcStack_70 = (char ****)pppppcVar7;
          func_0x006a41f4();
          uStack_a0 = extraout_x11;
          ppppcStack_a8 = (char ****)extraout_x10_00;
          if (cVar4 == cVar3) {
            uStack_a0 = extraout_x8_01;
            ppppcStack_a8 = (char ****)pppppcVar6;
          }
          func_0x006a42a4(&ppppcStack_c0);
          func_0x006a3f88(bStack_a9);
          func_0x006a3f94();
          goto LAB_006a1a90;
        }
        uVar5 = bVar2 == 0x2f;
joined_r0x006a19a8:
        if ('/' < (char)bVar2) {
          uVar9 = (uint)bVar2;
          cVar3 = SBORROW4(uVar9,0x37);
          cVar4 = (int)(uVar9 - 0x37) < 0;
          uVar5 = uVar9 == 0x37;
          if (uVar9 < 0x38) goto LAB_006a19b4;
        }
      }
    }
    pppppcVar7 = pppppcVar6;
    FUN_006ac4a4(pppppcVar6,0xffffffffffffffff,&ppppcStack_78);
    if ((int)pppppcVar7 == 0) {
      FUN_006ac584(pppppcVar6);
    }
    else {
      param_1 = (double)NEON_ucvtf(ppppcStack_78);
    }
    *param_3 = param_1;
    func_0x006a4544();
    if (((ulong)pppppcVar8 & 1) != 0) goto LAB_006a188c;
  }
  pppppcVar8 = (char *****)((long)&MACH_HEADER.magic + 1);
LAB_006a1a98:
  func_0x006a3c9c(uStack_48,pppppcVar8);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x006a3e1c();
    pppppcVar8 = &ppppcStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppppcVar8);
    func_0x006a3f28();
    FUN_00554ab4();
    return pppppcVar8;
  }
  return pppppcVar8;
}



/* Entry: 006a1afc; end: 006a1b27;  */

undefined8 FUN_006a1afc(undefined8 param_1)

{
  FUN_00554ab4(param_1,&UNK_0091526b,0x2c);
  return param_1;
}



/* Entry: 006a1b28; end: 006a1c17;  */

void FUN_006a1b28(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong extraout_x8;
  undefined1 uVar5;
  long extraout_x9;
  ulong uVar6;
  ulong extraout_x10;
  long extraout_x11;
  long lVar7;
  long extraout_x12;
  ulong uVar8;
  long extraout_x13;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x19;
  ulong *unaff_x20;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  
  plVar2 = param_3;
  func_0x006a41a0();
  Hint_Prefetch(*param_2,0,2,0);
  func_0x006a1cb0(*param_2);
  uVar4 = *unaff_x20;
  uVar6 = unaff_x20[2];
  uVar8 = uVar4 >> 0xc ^ (ulong)plVar2 >> 7;
  uVar5 = SUB81(plVar2,0);
  uVar11 = CONCAT17(uVar5,CONCAT16(uVar5,CONCAT15(uVar5,CONCAT14(uVar5,CONCAT13(uVar5,CONCAT12(uVar5
                                                  ,CONCAT11(uVar5,uVar5))))))) & 0x7f7f7f7f7f7f7f7f;
  lVar12 = *param_3;
  lVar7 = param_3[1];
  while( true ) {
    uVar13 = *(ulong *)(uVar4 + (uVar8 & uVar6));
    for (uVar10 = CONCAT17(-((char)(uVar13 >> 0x38) == (char)(uVar11 >> 0x38)),
                           CONCAT16(-((char)(uVar13 >> 0x30) == (char)(uVar11 >> 0x30)),
                                    CONCAT15(-((char)(uVar13 >> 0x28) == (char)(uVar11 >> 0x28)),
                                             CONCAT14(-((char)(uVar13 >> 0x20) ==
                                                       (char)(uVar11 >> 0x20)),
                                                      CONCAT13(-((char)(uVar13 >> 0x18) ==
                                                                (char)(uVar11 >> 0x18)),
                                                               CONCAT12(-((char)(uVar13 >> 0x10) ==
                                                                         (char)(uVar11 >> 0x10)),
                                                                        CONCAT11(-((char)(uVar13 >>
                                                                                         8) ==
                                                                                  (char)(uVar11 >> 8
                                                                                        )),
                                                                                 -((char)uVar13 ==
                                                                                  (char)uVar11))))))
                                   )) & 0x8080808080808080; uVar10 != 0;
        uVar10 = uVar10 - 1 & uVar10) {
      uVar9 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = unaff_x20[1];
      puVar3 = (ulong *)((uVar8 & uVar6) + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) &
                        uVar6);
      plVar2 = (long *)(uVar9 + (long)puVar3 * 0x10);
      if (*plVar2 == lVar12 && plVar2[1] == lVar7) {
        uVar5 = 0;
        goto LAB_006a1be0;
      }
    }
    func_0x006a4538();
    if ((uVar13 & 1) != 0) break;
    uVar8 = extraout_x9 + 8 + extraout_x13;
    uVar4 = extraout_x8;
    uVar6 = extraout_x10;
    lVar12 = extraout_x11;
    lVar7 = extraout_x12;
  }
  puVar3 = unaff_x20;
  func_0x006a1c18();
  lVar12 = *param_3;
  plVar2 = (long *)(unaff_x20[1] + (long)puVar3 * 0x10);
  plVar2[1] = param_3[1];
  *plVar2 = lVar12;
  uVar4 = *unaff_x20;
  uVar9 = unaff_x20[1];
  uVar5 = 1;
LAB_006a1be0:
  *unaff_x19 = uVar4 + (long)puVar3;
  unaff_x19[1] = uVar9 + (long)puVar3 * 0x10;
  *(undefined1 *)(unaff_x19 + 2) = uVar5;
  return;
}



/* Entry: 006a1c18; end: 006a1ceb;  */

void FUN_006a1c18(long param_1)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined8 extraout_x8;
  long lVar2;
  long *unaff_x19;
  
  func_0x006a3cdc();
  func_0x00553d3c();
  lVar2 = *unaff_x19;
  if ((*(long *)(lVar2 + -8) == 0) && (in_ZR = *(char *)(lVar2 + param_1) == -2, !(bool)in_ZR)) {
    bVar1 = 8 < (ulong)unaff_x19[2];
    in_ZR = unaff_x19[2] == 9;
    if ((bVar1) && (func_0x006a424c(), bVar1)) {
      func_0x006a42b8();
    }
    else {
      func_0x006a44e4();
      FUN_006a1d0c();
    }
    func_0x006a411c();
    func_0x00553d3c();
    lVar2 = *unaff_x19;
  }
  func_0x006a3db0(lVar2);
  func_0x006a3c9c(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x006a4600(&PTR_LOOP_00a01490);
  func_0x006a4600();
  return;
}



/* Entry: 006a1cec; end: 006a1d0b;  */

void FUN_006a1cec(void)

{
  func_0x006a4600();
  return;
}



/* Entry: 006a1d0c; end: 006a1d7b;  */

void FUN_006a1d0c(void)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x006a47f8();
  func_0x006a4288();
  FUN_003b3200();
  lVar3 = *(long *)(unaff_x19 + 8);
  for (lVar2 = 0; unaff_x23 != lVar2; lVar2 = lVar2 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar2)) {
      puVar1 = unaff_x20;
      func_0x006a1cb0();
      func_0x006a4088();
      func_0x006a3e9c();
      uVar4 = *unaff_x20;
      puVar1 = (undefined8 *)(lVar3 + (long)puVar1 * 0x10);
      puVar1[1] = unaff_x20[1];
      *puVar1 = uVar4;
    }
    unaff_x20 = unaff_x20 + 2;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 006a1d7c; end: 006a1d8b;  */

void FUN_006a1d7c(void)

{
  func_0x006a4600(&PTR_LOOP_00a01490);
  func_0x006a4600();
  return;
}



/* Entry: 006a1d8c; end: 006a1f57;  */

void FUN_006a1d8c(undefined8 param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long **pplVar7;
  undefined8 uVar8;
  code *extraout_x8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plStack_78;
  ulong uStack_70;
  long *plStack_60;
  ulong uStack_58;
  
  uVar11 = param_2[1];
  plVar4 = (long *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar11 = (ulong)*(byte *)((long)param_2 + 0x17);
    plVar4 = param_2;
  }
  plStack_60 = plVar4;
  uStack_58 = uVar11;
  func_0x006a472c(*(undefined8 *)(*param_3 + 0x28));
  func_0x006a46b0();
  plVar6 = plStack_78;
  while (plStack_78 = plVar4, uVar11 != 0) {
    uStack_70 = uVar11;
    for (uVar10 = 0; uVar9 = uVar11, uVar10 < uVar11; uVar10 = uVar10 + 1) {
      bVar2 = *(byte *)((long)plStack_78 + uVar10);
      uVar9 = uVar10;
      if ((char)bVar2 < '\0') {
        do {
          uVar1 = uVar9 + 1;
          uVar12 = uVar11;
          if (uVar11 <= uVar1) break;
          lVar5 = uVar9 + 1;
          uVar9 = uVar1;
          uVar12 = uVar1;
        } while (*(char *)((long)plStack_78 + lVar5) < '\0');
        pplVar7 = &plStack_78;
        FUN_00485b24(pplVar7,uVar10,(long **)(uVar12 - uVar10));
        FUN_00553b3c();
        if (pplVar7 != (long **)(uVar12 - uVar10)) {
          uVar9 = (long)pplVar7 + uVar10;
          break;
        }
        uVar10 = uVar12 - 1;
        uVar11 = uStack_70;
      }
      else if ((0x5e < bVar2 - 0x20) ||
              (uVar3 = bVar2 - 0x22,
              uVar3 < 0x3b && (1L << ((ulong)uVar3 & 0x3f) & 0x400000000000021U) != 0)) break;
    }
    if (uVar9 != 0) {
      pplVar7 = &plStack_60;
      uVar8 = 0;
      FUN_00485b24(pplVar7,0,uVar9);
      func_0x006a3ffc();
      (*extraout_x8)(param_3,pplVar7,uVar8);
      plStack_60 = (long *)((long)plStack_60 + uVar9);
      uStack_58 = uStack_58 - uVar9;
      plVar6 = plStack_78;
      if (uStack_58 == 0) break;
    }
    FUN_00485b24(&plStack_60,0,1);
    FUN_005728bc(&plStack_78);
    func_0x006a3d9c();
    func_0x006a3ffc();
    func_0x006a3ff4();
    func_0x006a3f80();
    plStack_60 = (long *)((long)plStack_60 + 1);
    uVar11 = uStack_58 - 1;
    plVar4 = plStack_60;
    plVar6 = plStack_78;
    uStack_58 = uVar11;
  }
  plStack_78 = plVar6;
  func_0x006a3ffc();
  func_0x006a472c();
  func_0x006a3f54();
  return;
}



/* Entry: 006a1f58; end: 006a1f9b;  */

void FUN_006a1f58(undefined8 param_1,long *param_2,long *param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x006a472c(*(undefined8 *)(*param_3 + 0x28));
  func_0x006a46b0();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    if (param_2[1] == 0) goto LAB_0069c928;
    param_2 = (long *)*param_2;
  }
  else if (*(char *)((long)param_2 + 0x17) == '\0') goto LAB_0069c928;
  FUN_005728bc(auStack_48,param_2);
  func_0x006a3d9c();
  func_0x006a3ffc();
  func_0x006a3ff4();
  func_0x006a3f80();
LAB_0069c928:
  func_0x006a3ffc();
  func_0x006a472c();
  func_0x006a3f54();
  return;
}



/* Entry: 006a1f9c; end: 006a1faf;  */

void FUN_006a1f9c(void)

{
  FUN_006a22f8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 006a1fb0; end: 006a1feb;  */

void FUN_006a1fb0(long param_1)

{
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return;
}



/* Entry: 006a1fec; end: 006a20bb;  */

void FUN_006a1fec(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  char *pcVar2;
  code *extraout_x8;
  code *extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long in_stack_00000008;
  
  func_0x006a47f8();
  func_0x006a41a0();
  if (*(int *)(param_1 + 0x20) < 1) {
    func_0x006a411c();
    FUN_006a2174();
    if ((param_3 != 0) && (*(char *)(unaff_x20 + param_3 + -1) == '\n')) {
      *(undefined1 *)((long)unaff_x19 + 0x1c) = 1;
    }
    return;
  }
  lVar3 = 0;
  do {
    lVar7 = 0;
    pcVar2 = (char *)(unaff_x20 + lVar3);
    while( true ) {
      if (lVar3 - param_3 == lVar7) {
        param_3 = param_3 - lVar3;
        lVar3 = unaff_x20 + lVar3;
        if (param_3 == 0) {
          return;
        }
        if ((*(byte *)((long)unaff_x19 + 0x1d) & 1) == 0) {
          if ((*(char *)((long)unaff_x19 + 0x1c) == '\x01') &&
             (*(undefined1 *)((long)unaff_x19 + 0x1c) = 0, (int)unaff_x19[4] != 0)) {
            plVar6 = unaff_x19;
            (**(code **)(*unaff_x19 + 0x20))();
            while( true ) {
              iVar4 = (int)unaff_x19[3];
              iVar5 = (int)plVar6;
              if (iVar5 <= iVar4) break;
              if (0 < iVar4) {
                _memset(unaff_x19[2],0x20,iVar4);
                iVar4 = (int)unaff_x19[3];
              }
              uVar1 = (uint)unaff_x19[1];
              func_0x006a42e4();
              (*extraout_x8)();
              *(char *)((long)unaff_x19 + 0x1d) = (char)(uVar1 ^ 1);
              if (((uVar1 ^ 1) & 1) != 0) {
                return;
              }
              plVar6 = (long *)(ulong)(uint)(iVar5 - iVar4);
              unaff_x19[2] = in_stack_00000008;
            }
            _memset(unaff_x19[2],0x20,(long)iVar5);
            unaff_x19[2] = unaff_x19[2] + (long)iVar5;
            *(int *)(unaff_x19 + 3) = (int)unaff_x19[3] - iVar5;
            if ((*(byte *)((long)unaff_x19 + 0x1d) & 1) != 0) {
              return;
            }
          }
          while( true ) {
            if (param_3 <= (int)unaff_x19[3]) {
              _memcpy(unaff_x19[2],lVar3,param_3);
              unaff_x19[2] = unaff_x19[2] + param_3;
              *(int *)(unaff_x19 + 3) = (int)unaff_x19[3] - (int)param_3;
              return;
            }
            if (0 < (int)unaff_x19[3]) {
              _memcpy(unaff_x19[2],lVar3);
              lVar3 = lVar3 + (int)unaff_x19[3];
              param_3 = param_3 - (int)unaff_x19[3];
            }
            uVar1 = (uint)unaff_x19[1];
            func_0x006a42e4();
            (*extraout_x8_00)();
            *(byte *)((long)unaff_x19 + 0x1d) = (byte)uVar1 ^ 1;
            if ((uVar1 & 1) == 0) break;
            unaff_x19[2] = 0;
          }
          return;
        }
        return;
      }
      if (*pcVar2 == '\n') break;
      lVar7 = lVar7 + -1;
      pcVar2 = pcVar2 + 1;
    }
    FUN_006a2174();
    lVar3 = (lVar3 - lVar7) + 1;
    *(undefined1 *)((long)unaff_x19 + 0x1c) = 1;
  } while( true );
}



/* Entry: 006a20bc; end: 006a210b;  */

void FUN_006a20bc(long param_1,undefined8 param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  func_0x006a4684();
  if (*(char *)(param_1 + 0x1e) == '\x01') {
    *(undefined1 *)(param_1 + 0x1e) = 0;
    func_0x006a4798();
                    /* WARNING: Could not recover jumptable at 0x006a20fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,&UNK_00827db5,0);
    return;
  }
  return;
}



/* Entry: 006a210c; end: 006a2173;  */

void FUN_006a210c(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x006a478c();
  func_0x006a4684();
  if (*(char *)((long)param_1 + 0x1e) == '\x01') {
    *(undefined1 *)((long)param_1 + 0x1e) = 0;
    (**(code **)(*param_1 + 0x28))(param_1,&UNK_00827db5,0);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x28);
  func_0x006a4194();
                    /* WARNING: Could not recover jumptable at 0x006a2170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 006a2174; end: 006a22f7;  */

void FUN_006a2174(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lStack_48;
  
  if ((param_3 != 0) && ((*(byte *)((long)param_1 + 0x1d) & 1) == 0)) {
    if ((*(char *)((long)param_1 + 0x1c) == '\x01') &&
       (*(undefined1 *)((long)param_1 + 0x1c) = 0, (int)param_1[4] != 0)) {
      plVar4 = param_1;
      (**(code **)(*param_1 + 0x20))();
      while( true ) {
        iVar2 = (int)param_1[3];
        iVar3 = (int)plVar4;
        if (iVar3 <= iVar2) break;
        if (0 < iVar2) {
          _memset(param_1[2],0x20,iVar2);
          iVar2 = (int)param_1[3];
        }
        uVar1 = (uint)param_1[1];
        func_0x006a42e4();
        (*extraout_x8)();
        *(char *)((long)param_1 + 0x1d) = (char)(uVar1 ^ 1);
        if (((uVar1 ^ 1) & 1) != 0) {
          return;
        }
        plVar4 = (long *)(ulong)(uint)(iVar3 - iVar2);
        param_1[2] = lStack_48;
      }
      _memset(param_1[2],0x20,(long)iVar3);
      param_1[2] = param_1[2] + (long)iVar3;
      *(int *)(param_1 + 3) = (int)param_1[3] - iVar3;
      if ((*(byte *)((long)param_1 + 0x1d) & 1) != 0) {
        return;
      }
    }
    while ((int)param_1[3] < param_3) {
      if (0 < (int)param_1[3]) {
        _memcpy(param_1[2],param_2);
        param_2 = param_2 + (int)param_1[3];
        param_3 = param_3 - (int)param_1[3];
      }
      uVar1 = (uint)param_1[1];
      func_0x006a42e4();
      (*extraout_x8_00)();
      *(byte *)((long)param_1 + 0x1d) = (byte)uVar1 ^ 1;
      if ((uVar1 & 1) == 0) {
        return;
      }
      param_1[2] = 0;
    }
    _memcpy(param_1[2],param_2,param_3);
    param_1[2] = param_1[2] + param_3;
    *(int *)(param_1 + 3) = (int)param_1[3] - (int)param_3;
  }
  return;
}



/* Entry: 006a22f8; end: 006a233f;  */

undefined8 * FUN_006a22f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0ff58;
  if ((*(byte *)((long)param_1 + 0x1d) & 1) == 0) {
    (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],*(undefined4 *)(param_1 + 3));
  }
  return param_1;
}



/* Entry: 006a2340; end: 006a234f;  */

void FUN_006a2340(void)

{
  func_0x006a4600(&PTR_LOOP_00a01490);
  return;
}



/* Entry: 006a2350; end: 006a294f;  */

/* WARNING: Possible PIC construction at 0x006a2ab8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006a2abc) */
/* WARNING: Removing unreachable block (ram,0x006a2acc) */
/* WARNING: Removing unreachable block (ram,0x006a2ae8) */
/* WARNING: Removing unreachable block (ram,0x006a2af0) */
/* WARNING: Removing unreachable block (ram,0x006a2af8) */
/* WARNING: Removing unreachable block (ram,0x006a2afc) */

void FUN_006a2350(ulong *param_1,ulong *param_2,ulong *param_3,uint param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong *unaff_x19;
  ulong *puVar16;
  ulong *unaff_x23;
  long lVar17;
  long unaff_x24;
  ulong uVar18;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long lStack_c0;
  ulong *puStack_b8;
  ulong *puStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [8];
  ulong *puStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  
  plVar3 = (long *)auStack_80;
LAB_006a237c:
  puVar16 = param_2 + -1;
  puStack_70 = param_2 + -2;
  puStack_78 = param_2 + -3;
  puVar12 = param_1;
  puStack_68 = param_2;
LAB_006a2394:
  param_1 = puVar12;
  puVar7 = puStack_68;
  uVar18 = (long)puStack_68 - (long)param_1 >> 3;
  switch(uVar18) {
  case 0:
  case 1:
    goto LAB_006a293c;
  case 2:
    uVar18 = puStack_68[-1];
    FUN_006a2950(uVar18,*param_1);
    if ((int)uVar18 != 0) {
      uVar18 = *param_1;
      *param_1 = puVar7[-1];
      puVar7[-1] = uVar18;
    }
    goto LAB_006a293c;
  case 3:
    puVar12 = param_1 + 1;
    puVar7 = param_1;
    puVar6 = puVar16;
    func_0x006a4504();
    uVar18 = *puVar12;
    puStack_b0 = param_3;
    puStack_a8 = puVar16;
    puStack_a0 = param_1;
    puStack_98 = unaff_x19;
    func_0x006a433c();
    iVar4 = (int)*puVar6;
    func_0x006a4310();
    if ((uVar18 & 1) == 0) {
      if (iVar4 == 0) {
        return;
      }
      func_0x006a47a4();
      iVar4 = (int)*puVar12;
      func_0x006a433c();
      if (iVar4 == 0) {
        return;
      }
      uVar18 = *puVar7;
      *puVar7 = *puVar12;
      *puVar12 = uVar18;
      return;
    }
    uVar18 = *puVar7;
    if (iVar4 != 0) {
      *puVar7 = *puVar6;
      *puVar6 = uVar18;
      return;
    }
    *puVar7 = *puVar12;
    *puVar12 = uVar18;
    iVar4 = (int)*puVar6;
    FUN_006a2950();
    if (iVar4 == 0) {
      return;
    }
    func_0x006a47a4();
    return;
  case 4:
    puVar6 = puVar16;
    func_0x006a4504(param_1,param_1 + 1,param_1 + 2);
    break;
  case 5:
    puVar12 = param_1 + 2;
    puVar7 = param_1 + 3;
    func_0x006a4504(param_1,param_1 + 1,puVar12,puVar7,puVar16);
    plVar3 = &lStack_c0;
    unaff_x29 = auStack_90;
    puVar6 = puVar7;
    lStack_c0 = unaff_x24;
    puStack_b8 = unaff_x23;
    puStack_b0 = param_3;
    puStack_a8 = puVar16;
    puStack_a0 = param_1;
    puStack_98 = unaff_x19;
    func_0x006a43a8();
    unaff_x30 = 0x6a2abc;
    puVar16 = puVar12;
    param_3 = puVar7;
    break;
  default:
    goto code_r0x006a23ac;
  }
  *(ulong **)((long)plVar3 + -0x30) = param_3;
  *(ulong **)((long)plVar3 + -0x28) = puVar16;
  *(ulong **)((long)plVar3 + -0x20) = param_1;
  *(ulong **)((long)plVar3 + -0x18) = unaff_x19;
  *(undefined1 **)((long)plVar3 + -0x10) = unaff_x29;
  *(undefined8 *)((long)plVar3 + -8) = unaff_x30;
  func_0x006a43a8();
  FUN_006a29b4();
  iVar4 = (int)*puVar6;
  func_0x006a433c();
  if (((iVar4 != 0) && (func_0x006a4148(), iVar4 != 0)) && (func_0x006a416c(), iVar4 != 0)) {
    func_0x006a46f8();
  }
  return;
code_r0x006a23ac:
  if ((long)uVar18 < 0x18) {
    if ((param_4 & 1) == 0) {
      puVar12 = param_1;
      if (param_1 != puStack_68) {
        while( true ) {
          param_1 = param_1 + 1;
          puVar16 = puVar12 + 1;
          if (puVar16 == puVar7) break;
          uVar18 = puVar12[1];
          FUN_006a2950(uVar18,*puVar12);
          puVar12 = puVar16;
          if ((int)uVar18 != 0) {
            uVar18 = *puVar16;
            puVar16 = param_1;
            do {
              puVar6 = puVar16 + -1;
              *puVar16 = *puVar6;
              uVar5 = uVar18;
              FUN_006a2950(uVar18,puVar16[-2]);
              puVar16 = puVar6;
            } while ((uVar5 & 1) != 0);
            *puVar6 = uVar18;
          }
        }
      }
      goto LAB_006a293c;
    }
    if (param_1 == puStack_68) goto LAB_006a293c;
    lVar15 = 0;
    puVar12 = param_1;
    goto LAB_006a26a8;
  }
  if (param_3 == (ulong *)0x0) {
    if (param_1 == puStack_68) goto LAB_006a293c;
    uVar13 = uVar18 - 2 >> 1;
    uVar5 = uVar13;
    puVar12 = puStack_68;
    goto LAB_006a2724;
  }
  puVar12 = param_1 + (uVar18 >> 1);
  if (uVar18 < 0x81) {
    func_0x006a4618(puVar12,param_1);
  }
  else {
    func_0x006a4618(param_1,puVar12);
    FUN_006a29b4(param_1 + 1,puVar12 + -1,puStack_70);
    FUN_006a29b4(param_1 + 2,puVar12 + 1,puStack_78);
    FUN_006a29b4(puVar12 + -1,puVar12,puVar12 + 1);
    uVar18 = *param_1;
    *param_1 = *puVar12;
    *puVar12 = uVar18;
  }
  param_3 = (ulong *)((long)param_3 + -1);
  if ((param_4 & 1) == 0) {
    uVar18 = param_1[-1];
    FUN_006a2950(uVar18,*param_1);
    if ((uVar18 & 1) == 0) {
      uVar5 = *param_1;
      func_0x006a42b0();
      puVar12 = param_1;
      if ((uVar18 & 1) == 0) {
        do {
          puVar12 = puVar12 + 1;
          if (puVar7 <= puVar12) break;
          func_0x006a42b0();
        } while ((int)uVar18 == 0);
      }
      else {
        do {
          puVar12 = puVar12 + 1;
          func_0x006a42b0();
        } while ((uVar18 & 1) == 0);
      }
      if (puVar12 < puVar7) {
        do {
          puVar7 = puVar7 + -1;
          func_0x006a42b0();
        } while ((uVar18 & 1) != 0);
      }
      while (puVar12 < puVar7) {
        uVar13 = *puVar12;
        *puVar12 = *puVar7;
        *puVar7 = uVar13;
        do {
          puVar12 = puVar12 + 1;
          func_0x006a42b0();
        } while ((int)uVar18 == 0);
        do {
          puVar7 = puVar7 + -1;
          func_0x006a42b0();
        } while ((uVar18 & 1) != 0);
      }
      puVar6 = puVar12 + -1;
      if (param_1 != puVar6) {
        *param_1 = *puVar6;
      }
      param_4 = 0;
      *puVar6 = uVar5;
      unaff_x19 = puVar7;
      goto LAB_006a2394;
    }
  }
  unaff_x24 = 0;
  uVar18 = *param_1;
  do {
    uVar5 = *(ulong *)((long)param_1 + unaff_x24 + 8);
    func_0x006a4318();
    unaff_x24 = unaff_x24 + 8;
  } while ((uVar5 & 1) != 0);
  unaff_x23 = (ulong *)((long)param_1 + unaff_x24);
  puVar12 = unaff_x23;
  if (unaff_x24 == 8) {
    do {
      unaff_x19 = puVar7;
      if (puVar7 <= unaff_x23) break;
      puVar7 = puVar7 + -1;
      uVar5 = *puVar7;
      func_0x006a4318();
      unaff_x19 = puVar7;
    } while ((uVar5 & 1) == 0);
  }
  else {
    do {
      puVar7 = puVar7 + -1;
      iVar4 = (int)*puVar7;
      func_0x006a4318();
      unaff_x19 = puVar7;
    } while (iVar4 == 0);
  }
  while (puVar12 < puVar7) {
    uVar5 = *puVar12;
    *puVar12 = *puVar7;
    *puVar7 = uVar5;
    do {
      puVar12 = puVar12 + 1;
      uVar5 = *puVar12;
      func_0x006a4318();
    } while ((uVar5 & 1) != 0);
    do {
      puVar7 = puVar7 + -1;
      uVar5 = *puVar7;
      func_0x006a4318();
    } while ((uVar5 & 1) == 0);
  }
  param_2 = puVar12 + -1;
  if (param_1 != param_2) {
    *param_1 = *param_2;
  }
  *param_2 = uVar18;
  if (unaff_x23 < unaff_x19) goto LAB_006a2510;
  puVar7 = param_1;
  FUN_006a2b10(param_1,param_2);
  puVar6 = puVar12;
  FUN_006a2b10(puVar12,puStack_68);
  if ((int)puVar6 == 0) goto code_r0x006a250c;
  if (((ulong)puVar7 & 1) != 0) goto LAB_006a293c;
  goto LAB_006a237c;
LAB_006a26a8:
  puVar16 = puVar12 + 1;
  if (puVar16 == puVar7) goto LAB_006a293c;
  uVar18 = puVar12[1];
  FUN_006a2950(uVar18,*puVar12);
  if ((int)uVar18 != 0) {
    uVar18 = *puVar16;
    lVar2 = lVar15;
    do {
      lVar17 = lVar2;
      puVar1 = (undefined8 *)((long)param_1 + lVar17);
      puVar1[1] = *puVar1;
      puVar12 = param_1;
      if (lVar17 == 0) goto LAB_006a26fc;
      uVar5 = uVar18;
      FUN_006a2950(uVar18,puVar1[-1]);
      lVar2 = lVar17 + -8;
    } while ((uVar5 & 1) != 0);
    puVar12 = (ulong *)((long)param_1 + lVar17);
LAB_006a26fc:
    *puVar12 = uVar18;
  }
  lVar15 = lVar15 + 8;
  puVar12 = puVar16;
  goto LAB_006a26a8;
code_r0x006a250c:
  if (((ulong)puVar7 & 1) == 0) {
LAB_006a2510:
    FUN_006a2350(param_1,param_2,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_006a2394;
LAB_006a2724:
  do {
    if ((long)uVar5 <= (long)uVar13) {
      uVar11 = (uVar5 & 0x3fffffffffffffff) << 1 | 1;
      puVar16 = param_1 + uVar11;
      uVar9 = uVar5 * 2 + 2;
      puVar7 = puVar16;
      uVar14 = uVar11;
      if ((long)uVar9 < (long)uVar18) {
        uVar8 = *puVar16;
        FUN_006a2950(uVar8,puVar16[1]);
        puVar7 = puVar16 + 1;
        uVar14 = uVar9;
        if ((int)uVar8 == 0) {
          puVar7 = puVar16;
          uVar14 = uVar11;
        }
      }
      puVar16 = param_1 + uVar5;
      uVar9 = *puVar7;
      FUN_006a2950(uVar9,*puVar16);
      if ((uVar9 & 1) == 0) {
        uVar9 = *puVar16;
        do {
          puVar12 = puVar7;
          *puVar16 = *puVar12;
          if ((long)uVar13 < (long)uVar14) break;
          uVar8 = uVar14 << 1 | 1;
          puVar16 = param_1 + uVar8;
          uVar11 = uVar14 * 2 + 2;
          puVar7 = puVar16;
          uVar14 = uVar8;
          if ((long)uVar11 < (long)uVar18) {
            uVar10 = *puVar16;
            FUN_006a2950(uVar10,puVar16[1]);
            puVar7 = puVar16 + 1;
            uVar14 = uVar11;
            if ((int)uVar10 == 0) {
              puVar7 = puVar16;
              uVar14 = uVar8;
            }
          }
          uVar11 = *puVar7;
          FUN_006a2950(uVar11,uVar9);
          puVar16 = puVar12;
        } while ((int)uVar11 == 0);
        *puVar12 = uVar9;
        puVar12 = puStack_68;
      }
    }
    uVar5 = uVar5 - 1;
  } while (-1 < (long)uVar5);
  for (; 1 < (long)uVar18; uVar18 = uVar18 - 1) {
    uVar13 = *param_1;
    uVar5 = 0;
    puVar16 = param_1;
    do {
      uVar11 = uVar5 << 1 | 1;
      uVar9 = uVar5 * 2 + 2;
      uVar14 = uVar11;
      puVar7 = puVar16 + uVar5 + 1;
      if ((long)uVar9 < (long)uVar18) {
        uVar8 = puVar16[uVar5 + 1];
        FUN_006a2950(uVar8,puVar16[uVar5 + 2]);
        uVar14 = uVar9;
        puVar7 = puVar16 + uVar5 + 2;
        if ((int)uVar8 == 0) {
          uVar14 = uVar11;
          puVar7 = puVar16 + uVar5 + 1;
        }
      }
      *puVar16 = *puVar7;
      uVar5 = uVar14;
      puVar16 = puVar7;
    } while ((long)uVar14 <= (long)(uVar18 - 2 >> 1));
    puVar12 = puVar12 + -1;
    if (puVar7 == puVar12) {
      *puVar7 = uVar13;
    }
    else {
      *puVar7 = *puVar12;
      *puVar12 = uVar13;
      lVar15 = (long)puVar7 + (8 - (long)param_1) >> 3;
      if (1 < lVar15) {
        uVar5 = lVar15 - 2U >> 1;
        iVar4 = (int)param_1[uVar5];
        func_0x006a4310();
        if (iVar4 != 0) {
          uVar13 = *puVar7;
          puVar16 = param_1 + uVar5;
          do {
            puVar6 = puVar16;
            *puVar7 = *puVar6;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1 >> 1;
            uVar9 = param_1[uVar5];
            FUN_006a2950(uVar9,uVar13);
            puVar7 = puVar6;
            puVar16 = param_1 + uVar5;
          } while ((uVar9 & 1) != 0);
          *puVar6 = uVar13;
        }
      }
    }
  }
LAB_006a293c:
  func_0x006a4504(unaff_x30);
  return;
}



/* Entry: 006a2950; end: 006a29b3;  */

bool FUN_006a2950(long param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((*(byte *)(param_1 + 1) >> 3 & 1) == 0) {
    if ((*(byte *)(param_2 + 1) >> 3 & 1) != 0) {
      return true;
    }
    func_0x00659be0();
    func_0x00659be0(param_2);
    bVar2 = SBORROW4((int)param_1,(int)param_2);
    iVar1 = (int)param_1 - (int)param_2;
  }
  else {
    if ((*(byte *)(param_2 + 1) >> 3 & 1) == 0) {
      return false;
    }
    bVar2 = SBORROW4(*(int *)(param_1 + 4),*(int *)(param_2 + 4));
    iVar1 = *(int *)(param_1 + 4) - *(int *)(param_2 + 4);
  }
  return iVar1 < 0 != bVar2;
}



/* Entry: 006a29b4; end: 006a2a93;  */

void FUN_006a29b4(ulong *param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  func_0x006a433c();
  iVar1 = (int)*param_3;
  func_0x006a4310();
  if ((uVar2 & 1) == 0) {
    if (iVar1 != 0) {
      func_0x006a47a4();
      iVar1 = (int)*param_2;
      func_0x006a433c();
      if (iVar1 != 0) {
        uVar2 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar2;
      }
    }
  }
  else {
    uVar2 = *param_1;
    if (iVar1 == 0) {
      *param_1 = *param_2;
      *param_2 = uVar2;
      iVar1 = (int)*param_3;
      FUN_006a2950();
      if (iVar1 != 0) {
        func_0x006a47a4();
      }
    }
    else {
      *param_1 = *param_3;
      *param_3 = uVar2;
    }
  }
  return;
}



/* Entry: 006a2a94; end: 006a2b0f;  */

void FUN_006a2a94(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *in_x3;
  undefined8 *in_x4;
  
  func_0x006a43a8();
  func_0x006a2a4c();
  uVar2 = *in_x4;
  FUN_006a2950(uVar2,*in_x3);
  if ((int)uVar2 != 0) {
    uVar2 = *in_x3;
    *in_x3 = *in_x4;
    *in_x4 = uVar2;
    iVar1 = (int)*in_x3;
    func_0x006a433c();
    if (((iVar1 != 0) && (func_0x006a4148(), iVar1 != 0)) && (func_0x006a416c(), iVar1 != 0)) {
      func_0x006a46f8();
    }
  }
  return;
}



/* Entry: 006a2b10; end: 006a2c77;  */

bool FUN_006a2b10(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  func_0x006a47f8();
  func_0x006a41a0();
  switch(param_2 - param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    iVar8 = (int)unaff_x20[-1];
    func_0x006a4310();
    if (iVar8 != 0) {
      uVar6 = *unaff_x19;
      *unaff_x19 = unaff_x20[-1];
      unaff_x20[-1] = uVar6;
    }
    break;
  case 3:
    func_0x006a29b4();
    break;
  case 4:
    func_0x006a2a4c();
    break;
  case 5:
    FUN_006a2a94();
    break;
  default:
    func_0x006a4618();
    lVar7 = 0;
    iVar8 = 0;
    for (puVar4 = unaff_x19 + 3; puVar4 != unaff_x20; puVar4 = puVar4 + 1) {
      iVar2 = (int)*puVar4;
      func_0x006a433c();
      if (iVar2 != 0) {
        uVar6 = *puVar4;
        lVar1 = lVar7;
        do {
          lVar9 = lVar1;
          *(undefined8 *)((long)unaff_x19 + lVar9 + 0x18) =
               *(undefined8 *)((long)unaff_x19 + lVar9 + 0x10);
          puVar5 = unaff_x19;
          if (lVar9 == -0x10) goto LAB_006a2c18;
          uVar3 = uVar6;
          FUN_006a2950(uVar6,*(undefined8 *)((long)unaff_x19 + lVar9 + 8));
          lVar1 = lVar9 + -8;
        } while ((uVar3 & 1) != 0);
        puVar5 = (ulong *)((long)unaff_x19 + lVar9 + 0x10);
LAB_006a2c18:
        *puVar5 = uVar6;
        iVar8 = iVar8 + 1;
        if (iVar8 == 8) {
          return puVar4 + 1 == unaff_x20;
        }
      }
      lVar7 = lVar7 + 8;
    }
  }
  return true;
}



/* Entry: 006a2c78; end: 006a2cbb;  */

undefined8 * FUN_006a2c78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    FUN_006a2cbc();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 006a2cbc; end: 006a2d63;  */

long FUN_006a2cbc(long param_1)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  undefined8 *unaff_x20;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  func_0x006a41a0();
  FUN_006a2d64();
  lVar2 = *unaff_x19;
  lVar1 = unaff_x19[1];
  plStack_58 = unaff_x19 + 2;
  plStack_38 = plStack_58;
  if (param_1 == 0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_006a2e24();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar2));
  plStack_40 = plStack_58 + param_1;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *unaff_x20;
  FUN_006a2da4();
  lVar2 = unaff_x19[1];
  FUN_006a2e64(&plStack_58);
  return lVar2;
}



/* Entry: 006a2d64; end: 006a2da3;  */

ulong FUN_006a2d64(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar3;
  
  if (param_2 >> 0x3d == 0) {
    uVar2 = param_1[2] - *param_1 >> 2;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      uVar2 = 0x1fffffffffffffff;
    }
    return uVar2;
  }
  FUN_006a2e18();
  func_0x006a43a8();
  uVar3 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  uVar2 = uVar3;
  _memcpy(uVar3);
  unaff_x19[1] = uVar3;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return uVar2;
}



/* Entry: 006a2da4; end: 006a2e17;  */

void FUN_006a2da4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x006a43a8();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 006a2e18; end: 006a2e23;  */

void FUN_006a2e18(void)

{
  func_0x006a4260();
  FUN_006a2e48();
  return;
}


