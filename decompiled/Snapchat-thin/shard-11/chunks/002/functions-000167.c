/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108323a90; end: 108323acb;  */

long FUN_108323a90(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110a3c618);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108323acc; end: 108323b0f;  */

undefined ** FUN_108323acc(void)

{
  return &PTR_DAT_110a3c618;
}



/* Entry: 108323b10; end: 108323bd3;  */

void FUN_108323b10(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  undefined8 **appuStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  long lStack_38;
  
  if (param_3 != 0) {
    uStack_40 = param_2;
    lStack_38 = param_3;
    if ((*(char *)(param_1 + 0x118) == '\x01') && (*(char *)(param_1 + 0x178) == '\x01')) {
      for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x114); iVar2 = iVar2 + 1) {
        (**(code **)(**(long **)(param_1 + 0x40) + 0x10))(*(long **)(param_1 + 0x40),&DAT_10f48d515)
        ;
      }
    }
    plVar1 = *(long **)(param_1 + 0x40);
    func_0x000107c27958(appuStack_58,&uStack_40);
    if (-1 < cStack_41) {
      appuStack_58[0] = appuStack_58;
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,appuStack_58[0]);
    func_0x00010832c6dc();
    *(undefined1 *)(param_1 + 0x118) = 0;
  }
  return;
}



/* Entry: 108323bd4; end: 108323c0b;  */

void FUN_108323bd4(long param_1)

{
  FUN_108323b10();
  (**(code **)(**(long **)(param_1 + 0x40) + 0x10))
            (*(long **)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x70));
  *(undefined1 *)(param_1 + 0x118) = 1;
  return;
}



/* Entry: 108323c0c; end: 108323c23;  */

void FUN_108323c0c(long param_1)

{
  if ((*(byte *)(param_1 + 0x118) & 1) != 0) {
    return;
  }
  FUN_108323b10(param_1,0,0);
  (**(code **)(**(long **)(param_1 + 0x40) + 0x10))
            (*(long **)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x70));
  *(undefined1 *)(param_1 + 0x118) = 1;
  return;
}



/* Entry: 108323c24; end: 108323f03;  */

code ******* FUN_108323c24(code *******param_1,char *param_2,code *******param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *******pppppppcVar2;
  code *******pppppppcVar3;
  code *******pppppppcVar4;
  code *******pppppppcVar5;
  code *******pppppppcVar6;
  code *******pppppppcVar7;
  code *******pppppppcVar8;
  code *******pppppppcVar9;
  code *******pppppppcVar10;
  code *******pppppppcVar11;
  code *******pppppppcVar12;
  code *******pppppppcVar13;
  code *******pppppppcVar14;
  code *******pppppppcVar15;
  code *******pppppppcVar16;
  code *******pppppppcVar17;
  code *******pppppppcVar18;
  code *******pppppppcVar19;
  code *******pppppppcVar20;
  code *******pppppppcVar21;
  code *******pppppppcVar22;
  code *******pppppppcVar23;
  code *******pppppppcVar24;
  code *******pppppppcVar25;
  code *******pppppppcVar26;
  code *******pppppppcVar27;
  code *******pppppppcVar28;
  code *******pppppppcVar29;
  code *******pppppppcVar30;
  code *******pppppppcVar31;
  code *******pppppppcVar32;
  code *******pppppppcVar33;
  code *******pppppppcVar34;
  code *******pppppppcVar35;
  code *******pppppppcVar36;
  code *******pppppppcVar37;
  code *******pppppppcVar38;
  code *******pppppppcVar39;
  code *******pppppppcVar40;
  code *******pppppppcVar41;
  char cVar42;
  char cVar43;
  bool bVar44;
  uint uVar45;
  code *******pppppppcVar46;
  code *******pppppppcVar47;
  code ******ppppppcVar48;
  code *******pppppppcVar49;
  code *******pppppppcVar50;
  code *******extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 *extraout_x10;
  undefined1 *puVar51;
  code *******extraout_x10_00;
  code *******pppppppcVar52;
  code *******extraout_x11;
  undefined8 extraout_x11_00;
  int iVar53;
  undefined8 unaff_x19;
  code *******unaff_x20;
  int iVar54;
  code *******unaff_x22;
  long unaff_x24;
  code ******unaff_x25;
  undefined1 *unaff_x26;
  code *******unaff_x27;
  code *******unaff_x28;
  undefined8 *puVar55;
  code *pcVar56;
  undefined1 auStack_1b0 [144];
  undefined1 uStack_e1;
  code ******ppppppcStack_c0;
  code ******ppppppcStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [24];
  code *****apppppcStack_80 [3];
  undefined1 auStack_68 [24];
  code ******ppppppcStack_50;
  code *****pppppcStack_48;
  byte bStack_39;
  
  pppppppcVar6 = &ppppppcStack_c0;
  puVar55 = (undefined8 *)&stack0xfffffffffffffff0;
  ppppppcVar48 = (code ******)param_2;
  pppppppcVar49 = param_3;
  (*(code *)(*param_3)[6])();
  (*(code *)(*param_3)[0x19])();
  pppppppcVar46 = param_3;
  switch(*(undefined1 *)((long)param_3 + 0x2c)) {
  case 0:
    func_0x00010832c488();
    func_0x00010832cc80();
    func_0x00010832c740((*param_3)[0x1d]);
    param_2 = (char *)(ulong)bStack_39;
    if ((int)pppppppcVar46 == 0) {
code_r0x000108323e30:
      unaff_x22 = (code *******)ppppppcStack_50;
code_r0x000108323e34:
      func_0x00010832ce40();
      func_0x00010832c740();
      cVar43 = (int)param_2 < 0;
      cVar42 = false;
code_r0x000108323e40:
      pppppppcVar50 = unaff_x22;
      if (cVar43 == cVar42) {
        pppppppcVar50 = &ppppppcStack_50;
      }
code_r0x000108323e48:
      ppppppcStack_c0 = (code ******)pppppppcVar50;
      ppppppcStack_b8 = (code ******)pppppppcVar46;
      FUN_1083d4028(param_1,&UNK_10f48d52b);
    }
    else {
      ppppppcStack_c0 = (code ******)&ppppppcStack_50;
      FUN_1083d4028(param_1,&UNK_10f48d51a);
    }
    break;
  case 1:
    ppppppcVar48 = (code ******)&UNK_10f48d5d3;
    goto code_r0x000108323ddc;
  default:
    pppppcStack_48 = (code *****)param_3[3];
    ppppppcStack_50 = param_3[2];
    func_0x000107c27958(param_1,&ppppppcStack_50);
    return param_1;
  case 4:
    func_0x00010832c488();
    FUN_108323c24(apppppcStack_80,param_2,pppppppcVar46);
    func_0x00010832ce40();
    func_0x00010832c740();
    __ZNSt3__19to_stringEi(auStack_98);
    func_0x00010533a9c0(auStack_68,apppppcStack_80,auStack_98);
    func_0x00010048a6c8(&ppppppcStack_50,auStack_68,&DAT_10f62b0e2);
    func_0x00010832c740((*param_3)[0xd]);
    __ZNSt3__19to_stringEi(auStack_b0);
    func_0x00010533a9c0(param_1,&ppppppcStack_50,auStack_b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppcStack_50);
    func_0x00010832c79c();
    func_0x00010832cc60();
    pppppppcVar46 = (code *******)apppppcStack_80;
    goto code_r0x000108323e60;
  case 6:
    func_0x00010832c740((*param_3)[0x14]);
    if ((int)param_3 != 1) {
      FUN_1083c8a60(*(code ******)((long)param_2 + 0x20),0xffffff,&UNK_10f48d539,0x1e);
    }
    ppppppcVar48 = (code ******)&DAT_10f48d558;
    goto code_r0x000108323ddc;
  case 10:
    pcVar56 = (code *)0x108323e00;
    func_0x00010832c740((*param_3)[0x21]);
    uVar45 = (uint)pppppppcVar46;
    cVar42 = SBORROW4(uVar45,3);
    cVar43 = (int)(uVar45 - 3) < 0;
    bVar44 = uVar45 == 3;
    if (3 < uVar45) {
                    /* WARNING: Does not return */
      pcVar56 = (code *)SoftwareBreakpoint(1,0x108323ea0);
      (*pcVar56)();
    }
    pppppppcVar50 = (code *******)((ulong)pppppppcVar46 & 0xff);
    pppppppcVar52 = (code *******)(ulong)*(byte *)((long)pppppppcVar50 + 0x10df1a5ec);
    puVar51 = (undefined1 *)((long)pppppppcVar52 * 4 + 0x108323e24);
    pppppppcVar7 = &ppppppcStack_c0;
    pppppppcVar8 = &ppppppcStack_c0;
    pppppppcVar9 = &ppppppcStack_c0;
    pppppppcVar10 = &ppppppcStack_c0;
    pppppppcVar29 = &ppppppcStack_c0;
    pppppppcVar11 = &ppppppcStack_c0;
    pppppppcVar12 = &ppppppcStack_c0;
    pppppppcVar34 = &ppppppcStack_c0;
    pppppppcVar13 = &ppppppcStack_c0;
    pppppppcVar2 = &ppppppcStack_c0;
    pppppppcVar38 = &ppppppcStack_c0;
    pppppppcVar39 = &ppppppcStack_c0;
    pppppppcVar40 = &ppppppcStack_c0;
    pppppppcVar41 = &ppppppcStack_c0;
    pppppppcVar14 = &ppppppcStack_c0;
    pppppppcVar15 = &ppppppcStack_c0;
    pppppppcVar16 = &ppppppcStack_c0;
    pppppppcVar17 = &ppppppcStack_c0;
    pppppppcVar18 = &ppppppcStack_c0;
    pppppppcVar19 = &ppppppcStack_c0;
    pppppppcVar20 = &ppppppcStack_c0;
    pppppppcVar21 = &ppppppcStack_c0;
    pppppppcVar3 = &ppppppcStack_c0;
    pppppppcVar35 = &ppppppcStack_c0;
    pppppppcVar36 = &ppppppcStack_c0;
    pppppppcVar37 = &ppppppcStack_c0;
    pppppppcVar4 = &ppppppcStack_c0;
    pppppppcVar26 = &ppppppcStack_c0;
    pppppppcVar22 = &ppppppcStack_c0;
    pppppppcVar23 = &ppppppcStack_c0;
    pppppppcVar24 = &ppppppcStack_c0;
    pppppppcVar25 = &ppppppcStack_c0;
    pppppppcVar5 = &ppppppcStack_c0;
    pppppppcVar27 = &ppppppcStack_c0;
    pppppppcVar28 = &ppppppcStack_c0;
    pppppppcVar30 = &ppppppcStack_c0;
    pppppppcVar31 = &ppppppcStack_c0;
    pppppppcVar32 = &ppppppcStack_c0;
    pppppppcVar33 = &ppppppcStack_c0;
    pppppppcVar47 = pppppppcVar46;
    switch(pppppppcVar50) {
    default:
      ppppppcVar48 = (code ******)&UNK_10f48d000;
    case (code *******)0x1d:
    case (code *******)0x21:
    case (code *******)0x23:
    case (code *******)0x31:
    case (code *******)0x37:
    case (code *******)0x39:
    case (code *******)0x3b:
    case (code *******)0x3d:
    case (code *******)0x3f:
    case (code *******)0x4d:
    case (code *******)0x52:
    case (code *******)0x53:
    case (code *******)0x55:
    case (code *******)0x57:
    case (code *******)0x63:
    case (code *******)0x7f:
    case (code *******)0x9f:
    case (code *******)0xa7:
    case (code *******)0xb9:
    case (code *******)0xc5:
      ppppppcVar48 = (code ******)((long)ppppppcVar48 + 0x562);
      goto code_r0x000108323e2c;
    case (code *******)0x1:
    case (code *******)0xf4:
      ppppppcVar48 = (code ******)&UNK_10f48d000;
    case (code *******)0x9e:
      ppppppcVar48 = (code ******)((long)ppppppcVar48 + 0x572);
      goto code_r0x000108323ddc;
    case (code *******)0x2:
    case (code *******)0xf7:
      ppppppcVar48 = (code ******)&UNK_10f48d000;
    case (code *******)0x66:
    case (code *******)0x68:
    case (code *******)0x7a:
    case (code *******)0xe6:
      ppppppcVar48 = ppppppcVar48 + 0xb2;
      goto code_r0x000108323e80;
    case (code *******)0x3:
      ppppppcVar48 = (code ******)&UNK_10f48d5af;
      goto code_r0x000108323ddc;
    case (code *******)0x4:
      while( true ) {
        pppppppcVar9 = pppppppcVar5;
        func_0x00010832c948();
        unaff_x24 = unaff_x24 + -0x58;
        unaff_x25 = unaff_x25 + 0xb;
        if (unaff_x24 == 0) {
          return pppppppcVar46;
        }
LAB_108323f5c:
        unaff_x27 = (code *******)(ulong)*(uint *)((long)unaff_x25 + -0x2c);
        unaff_x28 = (code *******)unaff_x25[3];
        pppppppcVar46 = (code *******)((long)puVar55 + -0x54);
        pppppppcVar10 = pppppppcVar9;
code_r0x000108323f6c:
        FUN_1083292e8();
        if (pppppppcVar46 == (code *******)0x0) break;
        bVar44 = (int)unaff_x27 == -1;
        pppppppcVar11 = pppppppcVar10;
code_r0x000108323f78:
        pppppppcVar47 = unaff_x28;
        if (!bVar44) {
          iVar54 = (int)unaff_x22;
          iVar53 = (int)unaff_x27;
          cVar42 = SBORROW4(iVar53,iVar54);
          cVar43 = iVar53 - iVar54 < 0;
          bVar44 = iVar53 == iVar54;
          pppppppcVar12 = pppppppcVar11;
code_r0x000108323f80:
          pppppppcVar34 = pppppppcVar12;
          if (cVar43 != cVar42) goto code_r0x00010832414c;
          pppppppcVar13 = pppppppcVar12;
          if (!bVar44 && cVar43 == cVar42) {
code_r0x000108323f88:
            pppppppcVar14 = pppppppcVar13;
code_r0x000108323f94:
            FUN_108323b10();
            *(int *)((long)param_3 + 0x6c) = *(int *)((long)param_3 + 0x6c) + 1;
            pppppppcVar15 = pppppppcVar14;
code_r0x000108323fa8:
            __ZNSt3__19to_stringEi((undefined1 *)((long)pppppppcVar15 + 0x70));
            pppppppcVar16 = pppppppcVar15;
code_r0x000108323fb0:
            func_0x00010832c550();
            pppppppcVar17 = pppppppcVar16;
            pppppppcVar50 = extraout_x8;
            puVar51 = extraout_x10;
            pppppppcVar52 = extraout_x11;
code_r0x000108323fb4:
            if (cVar43 == cVar42) {
              pppppppcVar52 = pppppppcVar50;
              puVar51 = unaff_x26;
            }
            FUN_108323b10(param_3,puVar51,pppppppcVar52);
            func_0x00010832c844();
            pppppppcVar18 = pppppppcVar17;
code_r0x000108323fd0:
            func_0x00010832c60c();
            pppppppcVar50 = (code *******)((long)pppppppcVar18 + 0x70);
            pppppppcVar19 = pppppppcVar18;
code_r0x000108323fe0:
            __ZNSt3__19to_stringEi(pppppppcVar50);
            pppppppcVar20 = pppppppcVar19;
code_r0x000108323fe4:
            func_0x00010832c550();
            pppppppcVar21 = pppppppcVar20;
code_r0x000108323ff0:
            FUN_108323b10(param_3);
            func_0x00010832c844();
            pppppppcVar3 = pppppppcVar21;
code_r0x000108324004:
            unaff_x22 = unaff_x27;
            pppppppcVar12 = pppppppcVar3;
            func_0x00010832c8f4();
            unaff_x27 = unaff_x22;
          }
          param_1 = (code *******)((long)puVar55 + -0x54);
          FUN_1083293a8(param_1,unaff_x28);
          pppppppcVar2 = pppppppcVar12;
code_r0x000108324020:
          pppppppcVar11 = pppppppcVar2;
          iVar54 = 0;
          iVar53 = (int)param_1;
          if (iVar53 != 0) {
            iVar54 = (int)unaff_x27 / iVar53;
          }
          pppppppcVar47 = unaff_x28;
          if ((int)unaff_x27 != iVar54 * iVar53) {
            param_2 = (char *)param_3[4];
            func_0x00010832cd40();
            pppppppcVar38 = pppppppcVar11;
            goto code_r0x000108324194;
          }
        }
        pppppppcVar46 = pppppppcVar47;
        (*(code *)(*pppppppcVar47)[0x1d])();
        if ((int)pppppppcVar46 == 0) {
          pppppppcVar46 = (code *******)((long)puVar55 + -0x54);
          FUN_1083294fc(pppppppcVar46,pppppppcVar47);
          pppppppcVar50 = (code *******)(ulong)((uint)unaff_x22 ^ 0x7fffffff);
          pppppppcVar26 = pppppppcVar11;
          unaff_x28 = pppppppcVar47;
code_r0x000108324094:
          pppppppcVar27 = pppppppcVar26;
          if (pppppppcVar50 < pppppppcVar46) {
            pppppppcVar46 = (code *******)param_3[4];
            FUN_1083c8a60(pppppppcVar46,*pppppppcVar26,&UNK_10f48e8e2,0x15);
            return pppppppcVar46;
          }
code_r0x00010832409c:
          unaff_x22 = (code *******)(ulong)(uint)((int)unaff_x22 + (int)pppppppcVar46);
          func_0x00010832ce70();
          FUN_108324294(param_3,unaff_x28);
          func_0x00010832c60c(param_3,param_2);
          pppppppcVar28 = pppppppcVar27;
code_r0x0001083240bc:
          pppppppcVar46 = param_3;
          func_0x00010832ce64();
          pppppppcVar5 = pppppppcVar28;
          param_3 = pppppppcVar46;
        }
        else {
          func_0x00010832ce70();
          pppppppcVar50 = (code *******)(*pppppppcVar47)[10];
          pppppppcVar22 = pppppppcVar11;
code_r0x000108324050:
          (*(code *)pppppppcVar50)();
          FUN_108324294(param_3,pppppppcVar47);
          func_0x00010832c60c(param_3,param_2);
          pppppppcVar23 = pppppppcVar22;
code_r0x00010832406c:
          func_0x00010832ce64();
          pppppppcVar24 = pppppppcVar23;
code_r0x00010832407c:
          func_0x00010832c678();
          pppppppcVar25 = pppppppcVar24;
code_r0x000108324080:
          pppppppcVar46 = param_3;
          pppppppcVar5 = pppppppcVar25;
          param_3 = pppppppcVar46;
        }
      }
      param_1 = (code *******)param_3[4];
      ppppppcVar48 = unaff_x28[2];
      *(code *******)((long)pppppppcVar10 + 0x28) = unaff_x28[3];
      *(code *******)((long)pppppppcVar10 + 0x20) = ppppppcVar48;
      pppppppcVar29 = pppppppcVar10;
    case (code *******)0x7c:
      func_0x000107c27958();
      pppppppcVar50 = (code *******)((long)pppppppcVar29 + 0x58);
      pppppppcVar30 = pppppppcVar29;
      goto code_r0x000108324100;
    case (code *******)0x6:
    case (code *******)0x1e:
    case (code *******)0x26:
    case (code *******)0x28:
    case (code *******)0x34:
    case (code *******)0x43:
    case (code *******)0x45:
    case (code *******)0x47:
    case (code *******)0x49:
    case (code *******)0x4b:
    case (code *******)0x4f:
    case (code *******)0x5b:
    case (code *******)0x5d:
    case (code *******)0x5f:
    case (code *******)0x6b:
    case (code *******)0x6d:
    case (code *******)0x6f:
    case (code *******)0x71:
    case (code *******)0x73:
    case (code *******)0x75:
    case (code *******)0x81:
    case (code *******)0x83:
    case (code *******)0x85:
    case (code *******)0x8d:
    case (code *******)0x8f:
    case (code *******)0x93:
    case (code *******)0x95:
    case (code *******)0x97:
    case (code *******)0x9b:
    case (code *******)0xa3:
    case (code *******)0xbb:
    case (code *******)0xbd:
    case (code *******)0xbf:
    case (code *******)0xc1:
    case (code *******)0xc3:
    case (code *******)0xc7:
    case (code *******)0xc9:
    case (code *******)0xcb:
    case (code *******)0xcd:
    case (code *******)0xcf:
    case (code *******)0xd3:
    case (code *******)0xd5:
    case (code *******)0xd7:
    case (code *******)0xe1:
    case (code *******)0xe3:
    case (code *******)0xe5:
      goto code_r0x000108323e30;
    case (code *******)0x7:
    case (code *******)0x1f:
    case (code *******)0x27:
    case (code *******)0x29:
    case (code *******)0x35:
      goto code_r0x000108323e34;
    case (code *******)0x8:
    case (code *******)0x18:
      goto code_r0x000108323e40;
    case (code *******)0xa:
code_r0x00010832414c:
      func_0x00010832cd40();
      func_0x00010832cba8();
      pppppppcVar35 = pppppppcVar34;
    case (code *******)0x90:
      func_0x00010832c7b4();
      pppppppcVar50 = (code *******)((long)pppppppcVar35 + 8);
      pppppppcVar36 = pppppppcVar35;
      goto code_r0x000108324164;
    case (code *******)0xc:
      pppppppcVar50 = &ppppppcStack_50;
      param_1 = pppppppcVar46;
      goto code_r0x000108323efc;
    case (code *******)0x12:
      goto code_r0x000108323e74;
    case (code *******)0x1a:
      goto code_r0x000108324080;
    case (code *******)0x1c:
      goto code_r0x000108323f94;
    case (code *******)0x20:
      goto code_r0x00010832407c;
    case (code *******)0x22:
    case (code *******)0xf6:
      goto code_r0x000108323e60;
    case (code *******)0x24:
    case (code *******)0x54:
      goto code_r0x000108323f34;
    case (code *******)0x2a:
      goto code_r0x000108323fa8;
    case (code *******)0x2c:
      goto code_r0x000108324128;
    case (code *******)0x2e:
      goto code_r0x00010832409c;
    case (code *******)0x30:
      goto code_r0x000108324164;
    case (code *******)0x32:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
      param_1 = pppppppcVar46;
    case (code *******)0xa4:
      pppppppcVar46 = param_1;
code_r0x000108323ed0:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppcStack_50);
      param_1 = pppppppcVar46;
      goto code_r0x000108323ed8;
    case (code *******)0x36:
    case (code *******)0x64:
      goto code_r0x000108324004;
    case (code *******)0x38:
      goto code_r0x000108323f88;
    case (code *******)0x3a:
      goto code_r0x000108323ed8;
    case (code *******)0x3c:
    case (code *******)0xa8:
      goto code_r0x0001083241a4;
    case (code *******)0x3e:
    case (code *******)0xfc:
      goto code_r0x000108324020;
    case (code *******)0x40:
      goto code_r0x000108323f14;
    case (code *******)0x41:
    case (code *******)0x61:
    case (code *******)0x65:
    case (code *******)0x91:
    case (code *******)0x99:
    case (code *******)0xa5:
    case (code *******)0xa9:
    case (code *******)0xad:
    case (code *******)0xaf:
    case (code *******)0xb3:
    case (code *******)0xd1:
    case (code *******)0xd9:
    case (code *******)0xdd:
    case (code *******)0xdf:
    case (code *******)0xe9:
    case (code *******)0xeb:
    case (code *******)0xf1:
    case (code *******)0xf3:
      goto code_r0x000108323e2c;
    case (code *******)0x42:
    case (code *******)0x44:
    case (code *******)0x46:
    case (code *******)0x48:
    case (code *******)0x4a:
    case (code *******)0x4e:
    case (code *******)0x5a:
    case (code *******)0x5c:
    case (code *******)0x5e:
    case (code *******)0x6a:
    case (code *******)0x6c:
    case (code *******)0x6e:
    case (code *******)0x70:
    case (code *******)0x72:
    case (code *******)0x74:
    case (code *******)0x80:
    case (code *******)0x82:
    case (code *******)0x84:
    case (code *******)0x8c:
    case (code *******)0x8e:
    case (code *******)0x92:
    case (code *******)0x94:
    case (code *******)0x96:
    case (code *******)0x9a:
    case (code *******)0xa2:
    case (code *******)0xba:
    case (code *******)0xbc:
    case (code *******)0xbe:
    case (code *******)0xc0:
    case (code *******)0xc2:
    case (code *******)0xc6:
    case (code *******)0xc8:
    case (code *******)0xca:
    case (code *******)0xcc:
    case (code *******)0xce:
    case (code *******)0xd2:
    case (code *******)0xd4:
    case (code *******)0xd6:
    case (code *******)0xe0:
    case (code *******)0xe2:
    case (code *******)0xe4:
      goto code_r0x000108323fd0;
    case (code *******)0x4c:
      goto code_r0x000108324178;
    case (code *******)0x50:
      goto code_r0x000108324254;
    case (code *******)0x56:
    case (code *******)0xb6:
    case (code *******)0xfb:
      break;
    case (code *******)0x60:
      goto code_r0x000108323f80;
    case (code *******)0x62:
      goto code_r0x0001083241d8;
    case (code *******)0x7e:
      goto code_r0x000108323fb0;
    case (code *******)0x86:
      goto code_r0x0001083240bc;
    case (code *******)0x98:
      goto code_r0x00010832411c;
    case (code *******)0x9c:
      goto code_r0x00010832410c;
    case (code *******)0xa6:
      goto code_r0x000108323ed0;
    case (code *******)0xaa:
      goto code_r0x000108324100;
    case (code *******)0xac:
      goto code_r0x000108323fe4;
    case (code *******)0xae:
code_r0x000108324194:
      func_0x00010832cba8();
      func_0x00010832c7b4();
      pppppppcVar39 = pppppppcVar38;
      goto code_r0x0001083241a4;
    case (code *******)0xb0:
      goto code_r0x00010832406c;
    case (code *******)0xb2:
      param_1 = pppppppcVar46;
      break;
    case (code *******)0xb4:
    case (code *******)0xfd:
      goto code_r0x000108323f78;
    case (code *******)0xb8:
      goto code_r0x000108323e80;
    case (code *******)0xc4:
      goto code_r0x000108324050;
    case (code *******)0xd0:
    case (code *******)0xf9:
      goto code_r0x000108323ff0;
    case (code *******)0xd8:
      goto code_r0x0001083241ec;
    case (code *******)0xda:
      goto code_r0x000108324094;
    case (code *******)0xdc:
      goto code_r0x000108323edc;
    case (code *******)0xde:
      goto code_r0x000108323f3c;
    case (code *******)0xe8:
      goto code_r0x0001083241b8;
    case (code *******)0xea:
      goto code_r0x000108323f28;
    case (code *******)0xec:
      goto code_r0x000108323f6c;
    case (code *******)0xee:
      goto code_r0x000108323ee0;
    case (code *******)0xf0:
      func_0x00010832c6dc();
      func_0x00010832c79c();
      func_0x00010832cb20();
code_r0x000108324254:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
      func_0x00010832c694();
      pppppppcVar46 = (code *******)&stack0xffffffffffffff08;
      func_0x00010832c958(pppppppcVar46);
      func_0x00010832c91c(uStack_e1);
      func_0x00010832c604();
      func_0x00010832c6dc();
      return pppppppcVar46;
    case (code *******)0xf2:
      goto code_r0x000108324180;
    case (code *******)0xf8:
      goto code_r0x000108323e48;
    case (code *******)0xfa:
      goto code_r0x000108323fe0;
    case (code *******)0xfe:
      goto code_r0x000108323fb4;
    }
    goto code_r0x000108323eec;
  case 0xb:
    func_0x00010832c488();
    func_0x00010832cc80();
    func_0x00010832ce40();
    func_0x00010832c740();
    __ZNSt3__19to_stringEi(auStack_68);
    func_0x00010533a9c0(param_1,&ppppppcStack_50,auStack_68);
    func_0x00010832c79c();
  }
  pppppppcVar46 = &ppppppcStack_50;
code_r0x000108323e60:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
code_r0x000108323e74:
  return pppppppcVar46;
code_r0x000108323ed8:
  func_0x00010832c79c();
code_r0x000108323edc:
  func_0x00010832cc60();
code_r0x000108323ee0:
code_r0x000108323eec:
  pppppppcVar50 = (code *******)apppppcStack_80;
code_r0x000108323efc:
  pppppppcVar46 = pppppppcVar50;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  pcVar56 = FUN_108323f04;
  func_0x00010832c694();
  pppppppcVar6 = (code *******)auStack_1b0;
code_r0x000108323f14:
  pppppppcVar6[0x18] = (code ******)unaff_x22;
  pppppppcVar6[0x19] = (code ******)param_2;
  pppppppcVar6[0x1a] = (code ******)param_3;
  pppppppcVar6[0x1b] = (code ******)param_1;
  pppppppcVar6[0x1c] = (code ******)puVar55;
  pppppppcVar6[0x1d] = (code ******)pcVar56;
  puVar55 = pppppppcVar6 + 0x1c;
  *pppppppcVar6 = (code ******)param_4;
  pppppppcVar7 = pppppppcVar6;
code_r0x000108323f28:
  unaff_x22 = (code *******)0x0;
  pppppppcVar50 = (code *******)0x2;
  pppppppcVar8 = pppppppcVar7;
  param_3 = pppppppcVar46;
code_r0x000108323f34:
  *(int *)((long)puVar55 + -0x54) = (int)pppppppcVar50;
  pppppppcVar50 = (code *******)0x58;
  pppppppcVar9 = pppppppcVar8;
  goto code_r0x000108323f3c;
code_r0x000108324100:
  func_0x0001004c3cd0(pppppppcVar50);
  pppppppcVar31 = pppppppcVar30;
code_r0x00010832410c:
  pppppppcVar50 = (code *******)((long)pppppppcVar31 + 0x70);
  pppppppcVar32 = pppppppcVar31;
code_r0x00010832411c:
  func_0x00010048a6c8(pppppppcVar50);
  func_0x00010832c550();
  pppppppcVar33 = pppppppcVar32;
code_r0x000108324128:
  FUN_1083c8a60(param_1,*pppppppcVar33);
  func_0x00010832c844();
  func_0x00010832c79c();
  pppppppcVar46 = pppppppcVar33 + 8;
  goto LAB_1083241e4;
code_r0x000108324164:
  __ZNSt3__19to_stringEi(pppppppcVar50,unaff_x22);
  func_0x00010832cc08();
  func_0x00010832c550();
  pppppppcVar37 = pppppppcVar36;
code_r0x000108324178:
  pppppppcVar4 = pppppppcVar37;
code_r0x000108324180:
  pppppppcVar40 = pppppppcVar4;
  func_0x00010832c6e4();
  FUN_1083c8a60();
  goto LAB_1083241d0;
code_r0x0001083241a4:
  __ZNSt3__19to_stringEi((undefined1 *)((long)pppppppcVar39 + 8),param_1);
  param_1 = (code *******)((long)pppppppcVar39 + 0x70);
  func_0x00010832cc08();
  pppppppcVar40 = pppppppcVar39;
  goto code_r0x0001083241b8;
code_r0x000108323e80:
  goto code_r0x000108323ddc;
code_r0x000108323f3c:
  unaff_x24 = (long)pppppppcVar49 * (long)pppppppcVar50;
  param_2 = " ";
  unaff_x25 = ppppppcVar48 + 7;
  unaff_x26 = (undefined1 *)((long)pppppppcVar9 + 0x70);
  if (unaff_x24 != 0) goto LAB_108323f5c;
code_r0x0001083241ec:
  return pppppppcVar46;
code_r0x0001083241b8:
  func_0x00010832c550();
  uVar1 = extraout_x11_00;
  pppppppcVar46 = extraout_x10_00;
  if (cVar43 == cVar42) {
    uVar1 = extraout_x8_00;
    pppppppcVar46 = param_1;
  }
  FUN_1083c8a60(param_2,param_3,pppppppcVar46,uVar1);
LAB_1083241d0:
  func_0x00010832c844();
  func_0x00010832c6dc();
  pppppppcVar41 = pppppppcVar40;
code_r0x0001083241d8:
  func_0x00010832c79c();
  func_0x00010832cb20();
  pppppppcVar46 = (code *******)((long)pppppppcVar41 + 0x20);
LAB_1083241e4:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppppppcVar46);
  return pppppppcVar46;
code_r0x000108323e2c:
code_r0x000108323ddc:
  func_0x00010002b82c(param_1);
  func_0x000107c613d0(ppppppcVar48);
  func_0x000107c60c50(unaff_x20,unaff_x19,ppppppcVar48);
  return unaff_x20;
}



/* Entry: 108323f04; end: 108324293;  */

void FUN_108323f04(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  char in_NG;
  char in_OV;
  undefined4 *puVar5;
  long *plVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined4 *puVar7;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined1 *extraout_x10;
  undefined1 *extraout_x10_00;
  undefined1 *extraout_x10_01;
  undefined1 *extraout_x10_02;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  undefined8 extraout_x11_02;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  long *plVar11;
  undefined1 auStack_e8 [24];
  long lStack_d0;
  long lStack_c8;
  long alStack_b0 [3];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [28];
  undefined4 uStack_64;
  
  uVar10 = 0;
  uStack_64 = 2;
  param_3 = param_3 * 0x58;
  param_2 = param_2 + 0x38;
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    uVar2 = *(uint *)(param_2 + -0x2c);
    plVar11 = *(long **)(param_2 + 0x18);
    puVar5 = &uStack_64;
    FUN_1083292e8(puVar5,plVar11);
    if (puVar5 == (undefined4 *)0x0) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      lStack_c8 = plVar11[3];
      lStack_d0 = plVar11[2];
      func_0x000107c27958(alStack_b0,&lStack_d0);
      func_0x0001004c3cd0(auStack_98,&UNK_10f48e874,alStack_b0);
      func_0x00010048a6c8(auStack_80,auStack_98,&UNK_10f48e87b);
      func_0x00010832c550();
      uVar1 = extraout_x11_01;
      puVar4 = extraout_x10_01;
      if (in_NG == in_OV) {
        uVar1 = extraout_x8_01;
        puVar4 = auStack_80;
      }
      FUN_1083c8a60(uVar9,param_4,puVar4,uVar1);
      func_0x00010832c844();
      func_0x00010832c79c();
      plVar11 = alStack_b0;
      goto LAB_1083241e4;
    }
    in_OV = SCARRY4(uVar2,1);
    in_NG = (int)(uVar2 + 1) < 0;
    if (uVar2 != 0xffffffff) break;
LAB_10832402c:
    plVar6 = plVar11;
    (**(code **)(*plVar11 + 0xe8))();
    if ((int)plVar6 == 0) {
      puVar5 = &uStack_64;
      FUN_1083294fc(puVar5,plVar11);
      puVar7 = (undefined4 *)(ulong)(uVar10 ^ 0x7fffffff);
      in_OV = SBORROW8((long)puVar5,(long)puVar7);
      in_NG = (long)puVar5 - (long)puVar7 < 0;
      if (puVar7 < puVar5) {
        FUN_1083c8a60(*(undefined8 *)(param_1 + 0x20),param_4,&UNK_10f48e8e2,0x15);
        return;
      }
      uVar10 = uVar10 + (int)puVar5;
      func_0x00010832ce70();
      FUN_108324294(param_1,plVar11);
      func_0x00010832c60c(param_1," ");
      func_0x00010832ce64();
    }
    else {
      func_0x00010832ce70();
      (**(code **)(*plVar11 + 0x50))(plVar11);
      FUN_108324294(param_1,plVar11);
      func_0x00010832c60c(param_1," ");
      func_0x00010832ce64();
      func_0x00010832c678(param_1,&UNK_10f48e8de);
    }
    func_0x00010832c948(param_1,";");
    param_3 = param_3 + -0x58;
    param_2 = param_2 + 0x58;
  }
  in_OV = SBORROW4(uVar2,uVar10);
  iVar3 = uVar2 - uVar10;
  in_NG = iVar3 < 0;
  if ((int)uVar2 < (int)uVar10) {
    func_0x00010832cd40();
    func_0x00010832cba8();
    func_0x00010832c7b4();
    __ZNSt3__19to_stringEi(auStack_e8,uVar10);
    func_0x00010832cc08();
    func_0x00010832c550();
    func_0x00010832c6e4();
    FUN_1083c8a60();
  }
  else {
    if (iVar3 != 0 && (int)uVar10 <= (int)uVar2) {
      FUN_108323b10(param_1,&UNK_10f48e8b9,8);
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
      __ZNSt3__19to_stringEi(auStack_80);
      func_0x00010832c550();
      uVar1 = extraout_x11;
      puVar4 = extraout_x10;
      if (in_NG == in_OV) {
        uVar1 = extraout_x8;
        puVar4 = auStack_80;
      }
      FUN_108323b10(param_1,puVar4,uVar1);
      func_0x00010832c844();
      func_0x00010832c60c(param_1,&DAT_10f62a9e8);
      __ZNSt3__19to_stringEi(auStack_80,iVar3);
      func_0x00010832c550();
      uVar1 = extraout_x11_00;
      puVar4 = extraout_x10_00;
      if (in_NG == in_OV) {
        uVar1 = extraout_x8_00;
        puVar4 = auStack_80;
      }
      FUN_108323b10(param_1,puVar4,uVar1);
      func_0x00010832c844();
      func_0x00010832c8f4(param_1,&UNK_10f48e8c2);
      uVar10 = uVar2;
    }
    puVar5 = &uStack_64;
    FUN_1083293a8(puVar5,plVar11);
    iVar3 = 0;
    iVar8 = (int)puVar5;
    if (iVar8 != 0) {
      iVar3 = (int)uVar2 / iVar8;
    }
    if (uVar2 == iVar3 * iVar8) goto LAB_10832402c;
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010832cd40();
    func_0x00010832cba8();
    func_0x00010832c7b4();
    __ZNSt3__19to_stringEi(auStack_e8,puVar5);
    func_0x00010832cc08();
    func_0x00010832c550();
    uVar1 = extraout_x11_02;
    puVar4 = extraout_x10_02;
    if (in_NG == in_OV) {
      uVar1 = extraout_x8_02;
      puVar4 = auStack_80;
    }
    FUN_1083c8a60(uVar9,param_1,puVar4,uVar1);
  }
  func_0x00010832c844();
  func_0x00010832c6dc();
  func_0x00010832c79c();
  func_0x00010832cb20();
  plVar11 = &lStack_d0;
LAB_1083241e4:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar11);
  return;
}



/* Entry: 108324294; end: 1083242eb;  */

void FUN_108324294(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [23];
  undefined1 uStack_21;
  
  func_0x00010832c958(auStack_38,param_2,param_2);
  func_0x00010832c91c(uStack_21);
  func_0x00010832c604();
  func_0x00010832c6dc();
  return;
}



/* Entry: 1083242ec; end: 1083258f3;  */

void FUN_1083242ec(undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  char *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long extraout_x8;
  long *plVar7;
  int iVar8;
  undefined8 unaff_x30;
  undefined8 **appuStack_2f8 [2];
  char cStack_2e1;
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [32];
  undefined8 auStack_200 [52];
  
  func_0x00010832d02c();
  uVar1 = *(int *)((long)param_2 + 0xc) - 0x19;
  bVar3 = uVar1 == 0x19;
  if (uVar1 < 0x1a) {
    func_0x00010832c7d0();
                    /* WARNING: Could not recover jumptable at 0x00010832433c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(ushort *)(&UNK_10df1a5f0 + extraout_x8 * 2) * 4 + 0x108324340))();
    return;
  }
  func_0x00010832c2a0();
  if (!bVar3) {
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_220);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_238);
    puVar4 = auStack_200;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010832c694();
    lVar6 = param_2[2];
    FUN_108324294();
    func_0x00010832cb90();
    puVar5 = puVar4;
    func_0x00010832cb58();
    func_0x00010832c9e8(*(undefined8 *)(*param_2 + 0x48));
    pcVar2 = "";
    for (lVar6 = lVar6 << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
      _strlen(pcVar2);
      func_0x00010832c3b4();
      FUN_1083242ec(puVar4,*puVar5,0x11);
      pcVar2 = ", ";
      puVar5 = puVar5 + 1;
    }
    _strlen();
    if (param_4 != 0) {
      if ((*(char *)(puVar4 + 0x23) == '\x01') && (*(char *)(puVar4 + 0x2f) == '\x01')) {
        for (iVar8 = 0; iVar8 < *(int *)((long)puVar4 + 0x114); iVar8 = iVar8 + 1) {
          (**(code **)(*(long *)puVar4[8] + 0x10))((long *)puVar4[8],&DAT_10f48d515);
        }
      }
      plVar7 = (long *)puVar4[8];
      func_0x000107c27958(appuStack_2f8,&stack0xfffffffffffffd20);
      if (-1 < cStack_2e1) {
        appuStack_2f8[0] = appuStack_2f8;
      }
      (**(code **)(*plVar7 + 0x10))(plVar7,appuStack_2f8[0]);
      func_0x00010832c6dc();
      *(undefined1 *)(puVar4 + 0x23) = 0;
    }
    return;
  }
  func_0x00010832cf78(unaff_x30);
  return;
}



/* Entry: 1083258f4; end: 10832599b;  */

void FUN_1083258f4(undefined8 *param_1,long *param_2,undefined8 param_3,long param_4)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  undefined8 **appuStack_58 [2];
  char cStack_41;
  
  lVar3 = param_2[2];
  FUN_108324294();
  func_0x00010832cb90();
  puVar2 = param_1;
  func_0x00010832cb58();
  func_0x00010832c9e8(*(undefined8 *)(*param_2 + 0x48));
  pcVar1 = "";
  for (lVar3 = lVar3 << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
    _strlen(pcVar1);
    func_0x00010832c3b4();
    FUN_1083242ec(param_1,*puVar2,0x11);
    pcVar1 = ", ";
    puVar2 = puVar2 + 1;
  }
  _strlen();
  if (param_4 != 0) {
    if ((*(char *)(param_1 + 0x23) == '\x01') && (*(char *)(param_1 + 0x2f) == '\x01')) {
      for (iVar5 = 0; iVar5 < *(int *)((long)param_1 + 0x114); iVar5 = iVar5 + 1) {
        (**(code **)(*(long *)param_1[8] + 0x10))((long *)param_1[8],&DAT_10f48d515);
      }
    }
    plVar4 = (long *)param_1[8];
    func_0x000107c27958(appuStack_58,&stack0xffffffffffffffc0);
    if (-1 < cStack_41) {
      appuStack_58[0] = appuStack_58;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,appuStack_58[0]);
    func_0x00010832c6dc();
    *(undefined1 *)(param_1 + 0x23) = 0;
  }
  return;
}



/* Entry: 10832599c; end: 108325ad3;  */

void FUN_10832599c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  lVar1 = 0x98;
  __Znwm();
  _bzero();
  *(undefined8 *)(lVar1 + 0x10) = &PTR_FUN_110a3c120;
  *(undefined ***)(lVar1 + 0x18) = &PTR_FUN_110a403f8;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined ***)(lVar1 + 0x50) = &PTR_FUN_110a3c120;
  *(undefined ***)(lVar1 + 0x58) = &PTR_FUN_110a403f8;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x78) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *(undefined8 *)(lVar1 + 0x88) = 0;
  *(undefined8 *)(lVar1 + 0x80) = 0;
  *(undefined1 *)(lVar1 + 0x90) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x170);
  *(long *)(param_1 + 0x170) = lVar1;
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 **)(param_1 + 0x40) = (undefined8 *)(lVar1 + 0x10);
  uStack_38 = uVar4;
  func_0x000104c003e8(param_2);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  lVar1 = *(long *)(param_1 + 0x170);
  lVar2 = *(long *)(lVar1 + 0x68);
  if ((lVar2 == 0) || ((*(long *)(lVar1 + 0x70) - lVar2) + -0x18 + *(long *)(lVar2 + 8) == 0)) {
    FUN_1083d4250(lVar1 + 0x10,uVar3);
  }
  else {
    FUN_10832c28c();
    FUN_1083d4250(*(long *)(param_1 + 0x170) + 0x50,*(undefined8 *)(param_1 + 0x40));
    FUN_1083d4250(*(long *)(param_1 + 0x170) + 0x10,*(undefined8 *)(param_1 + 0x40));
    func_0x00010832c2d0();
  }
  uStack_38 = *(undefined8 *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x170) = uVar4;
  FUN_10832b8d4(&uStack_38);
  return;
}



/* Entry: 108325ad4; end: 108326b07;  */

undefined8 FUN_108325ad4(undefined8 param_1,undefined8 param_2,int param_3)

{
  long extraout_x8;
  
  if (param_3 - 8U < 0x5e) {
    func_0x00010832c7d0();
                    /* WARNING: Could not recover jumptable at 0x000108325b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(ushort *)(&UNK_10df1a624 + extraout_x8 * 2) * 4 + 0x108325b18))();
    return param_1;
  }
  return 0;
}



/* Entry: 108326b08; end: 108326c23;  */

void FUN_108326b08(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined1 auStack_a8 [48];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x00010832c7d0();
  *(int *)(param_2 + 0x110) = *(int *)(param_2 + 0x110) + 1;
  __ZNSt3__19to_stringEi(auStack_48);
  func_0x0001004c3cd0(&UNK_10f48d615,auStack_48);
  func_0x00010832cf5c();
  FUN_108323c24(auStack_a8);
  func_0x00010832c81c(&DAT_10f48d515);
  func_0x00010832c8e0();
  func_0x00010832c76c();
  func_0x000100610910(auStack_60,auStack_78);
  func_0x00010048a6c8(auStack_48,auStack_60,&UNK_10f480bab);
  func_0x0001004c3ca0(unaff_x20 + 0x78,auStack_48);
  func_0x00010832cf5c();
  func_0x00010832c8ec();
  func_0x00010832c6d4();
  func_0x00010832c8cc();
  func_0x00010832c6dc();
  return;
}



/* Entry: 108326c24; end: 108326dab;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108326c24(ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = param_1;
  FUN_108328360();
  uVar2 = (uint)uVar1;
  if ((uVar1 & 1) != 0) {
    func_0x00010832c518();
    func_0x00010832c3b4();
    func_0x00010832c678(param_1,&UNK_10f48e43f);
    *param_3 = &DAT_10f68f19e;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    func_0x00010832c518();
    func_0x00010832c3b4();
    func_0x00010832c680(param_1,&UNK_10f48e443);
    *param_3 = &DAT_10f68f19e;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    func_0x00010832c518();
    func_0x00010832c3b4();
    func_0x00010832cf70(param_1,&UNK_10f48e448);
    *param_3 = &DAT_10f68f19e;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    func_0x00010832c518();
    func_0x00010832c3b4();
    FUN_108323b10(param_1,&UNK_10f48e452,8);
    *param_3 = &DAT_10f68f19e;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    func_0x00010832c518();
    func_0x00010832c3b4();
    func_0x00010832ce9c(param_1,&UNK_10f48e45b);
    *param_3 = &DAT_10f68f19e;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    func_0x00010832c518();
    func_0x00010832c3b4();
    func_0x00010832cecc(param_1,&UNK_10f48dc91);
    *param_3 = &DAT_10f68f19e;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    func_0x00010832c518();
    func_0x00010832c3b4();
    func_0x00010832cb18(param_1,&UNK_10f48dca1);
    *param_3 = &DAT_10f68f19e;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    func_0x00010832c518();
    func_0x00010832c3b4();
    func_0x00010832cc68(param_1,&UNK_10f48dcad);
    *param_3 = &DAT_10f68f19e;
  }
  if ((uVar2 >> 8 & 1) != 0) {
    func_0x00010832cb90();
    func_0x00010832cb58(param_1);
    func_0x00010832cc68(param_1,&UNK_10f48e466);
    *param_3 = &DAT_10f68f19e;
  }
  return;
}



/* Entry: 108326dac; end: 108326ddb;  */

void FUN_108326dac(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  int iVar4;
  long unaff_x22;
  undefined8 **appuStack_58 [2];
  char cStack_41;
  
  func_0x00010832ca38();
  lVar2 = *(long *)(*(long *)(param_2 + 0x18) + 0x18);
  FUN_108323b10();
  lVar1 = unaff_x20;
  func_0x00010832c7d0();
  func_0x00010832c60c();
  func_0x00010832ce10((long)*(int *)(unaff_x20 + 0x18));
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    func_0x00010832cce0();
    lVar2 = lVar1;
    func_0x00010832c64c();
    func_0x00010832c3a8();
  }
  func_0x00010832c350();
  if (lVar2 != 0) {
    if ((*(char *)(lVar1 + 0x118) == '\x01') && (*(char *)(lVar1 + 0x178) == '\x01')) {
      for (iVar4 = 0; iVar4 < *(int *)(lVar1 + 0x114); iVar4 = iVar4 + 1) {
        (**(code **)(**(long **)(lVar1 + 0x40) + 0x10))(*(long **)(lVar1 + 0x40),&DAT_10f48d515);
      }
    }
    plVar3 = *(long **)(lVar1 + 0x40);
    func_0x000107c27958(appuStack_58,&stack0xffffffffffffffc0);
    if (-1 < cStack_41) {
      appuStack_58[0] = appuStack_58;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,appuStack_58[0]);
    func_0x00010832c6dc();
    *(undefined1 *)(lVar1 + 0x118) = 0;
  }
  return;
}



/* Entry: 108326ddc; end: 108326e3b;  */

void FUN_108326ddc(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long unaff_x20;
  int iVar2;
  long unaff_x22;
  undefined8 **appuStack_58 [2];
  char cStack_41;
  
  func_0x00010832c7d0();
  func_0x00010832c60c();
  func_0x00010832ce10((long)*(int *)(unaff_x20 + 0x18));
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    func_0x00010832cce0();
    param_3 = param_1;
    func_0x00010832c64c();
    func_0x00010832c3a8();
  }
  func_0x00010832c350();
  if (param_3 != 0) {
    if ((*(char *)(param_1 + 0x118) == '\x01') && (*(char *)(param_1 + 0x178) == '\x01')) {
      for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x114); iVar2 = iVar2 + 1) {
        (**(code **)(**(long **)(param_1 + 0x40) + 0x10))(*(long **)(param_1 + 0x40),&DAT_10f48d515)
        ;
      }
    }
    plVar1 = *(long **)(param_1 + 0x40);
    func_0x000107c27958(appuStack_58,&stack0xffffffffffffffc0);
    if (-1 < cStack_41) {
      appuStack_58[0] = appuStack_58;
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,appuStack_58[0]);
    func_0x00010832c6dc();
    *(undefined1 *)(param_1 + 0x118) = 0;
  }
  return;
}



/* Entry: 108326e3c; end: 10832749b;  */

void FUN_108326e3c(long *param_1,long param_2,long *param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined *puVar11;
  code *UNRECOVERED_JUMPTABLE;
  long lVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  long *plVar19;
  long *plVar20;
  undefined *puVar21;
  uint uVar22;
  int iVar23;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [55];
  undefined1 uStack_61;
  
  plVar20 = (long *)param_3[2];
  plVar7 = param_1;
  lVar10 = param_2;
  func_0x00010832c9e0(*(undefined8 *)(*plVar20 + 0x60));
  plVar6 = plVar7;
  func_0x00010832c9e0(*(undefined8 *)(*plVar20 + 0x68));
  plVar8 = plVar6;
  func_0x00010832c9e8(*(undefined8 *)(*param_3 + 0x48));
  FUN_108323c24(auStack_98,param_2,plVar20);
  func_0x00010832cd90();
  FUN_1083d4028(param_1,&UNK_10f48da73);
  lVar12 = lVar10 * 8;
  for (lVar17 = 0; lVar12 - lVar17 != 0; lVar17 = lVar17 + 8) {
    func_0x00010832c778();
    FUN_1083d416c(param_1,&UNK_10f48da7b);
    func_0x00010832c844();
  }
  uVar16 = param_2 + 0x130;
  FUN_10832749c(uVar16,param_1);
  if ((uVar16 & 1) != 0) goto LAB_108327410;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_b0,param_1);
  FUN_108327540(param_2 + 0x130,auStack_b0);
  func_0x00010832cb20();
  func_0x00010832cd90();
  FUN_1083cbb18(param_2 + 0x90,&UNK_10f48da7f);
  for (; lVar12 != 0; lVar12 = lVar12 + -8) {
    func_0x00010832c778();
    FUN_1083cbb18(param_2 + 0x90,&UNK_10f48da86);
    func_0x00010832c844();
  }
  func_0x00010832cd90();
  puVar11 = &UNK_10f48da90;
  FUN_1083cbb18(param_2 + 0x90);
  uVar1 = (uint)plVar7 & ((int)(uint)plVar7 >> 0x1f ^ 0xffffffffU);
  uVar13 = (uint)plVar6;
  if (lVar10 == 1) {
    plVar7 = *(long **)(*plVar8 + 0x10);
    (**(code **)(*plVar7 + 0xd8))();
    if ((int)plVar7 == 0) goto LAB_1083271a4;
    plVar7 = *(long **)(*plVar8 + 0x10);
    func_0x00010832cae8(*(undefined8 *)(*plVar7 + 0x50));
    func_0x00010832c778();
    func_0x00010832cc18();
    for (uVar22 = 0; uVar22 != uVar1; uVar22 = uVar22 + 1) {
      func_0x00010832cfdc();
      func_0x00010832cb04();
      plVar6 = plVar7;
      (**(code **)(*plVar7 + 0x60))();
      if ((int)uVar22 < (int)plVar6) {
        (**(code **)(*plVar7 + 0x68))();
        uVar1 = (uint)plVar7;
        if ((int)uVar13 <= (int)(uint)plVar7) {
          uVar1 = uVar13;
        }
        if (4 < uVar1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x108327420);
          (*pcVar4)();
        }
        func_0x00010832cc18((&UNK_10df1a6e0)[uVar1]);
                    /* WARNING: Could not recover jumptable at 0x000108327100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      func_0x00010832cc18();
      for (iVar23 = 0; iVar23 < (int)uVar13; iVar23 = iVar23 + 1) {
        FUN_1083cbb18(param_2 + 0x90,&UNK_10f48da3e);
      }
    }
    func_0x00010832c6f8();
    func_0x00010832cae0();
  }
  else {
LAB_1083271a4:
    plVar8 = (long *)param_3[2];
    (**(code **)(*plVar8 + 0x50))();
    func_0x00010832c778();
    func_0x00010832c9e8(*(undefined8 *)(*param_3 + 0x48));
    uVar16 = 0;
    puVar18 = (undefined *)0x0;
    plVar7 = plVar8;
    func_0x00010832cc18();
    for (uVar22 = 0; uVar22 != uVar1; uVar22 = uVar22 + 1) {
      func_0x00010832cfdc();
      func_0x00010832cb04();
      plVar20 = (long *)0x0;
LAB_108327220:
      while (iVar23 = (int)plVar20, iVar23 < (int)uVar13) {
        func_0x00010832cae0();
        if (puVar18 < puVar11) {
          plVar19 = *(long **)(plVar8[(long)puVar18] + 0x10);
          cVar2 = *(char *)((long)plVar19 + 0x2c);
          iVar14 = (int)uVar16;
          if (cVar2 == '\x04') {
            func_0x00010832c784(*(undefined8 *)(*plVar19 + 0x68));
            plVar7 = (long *)(param_2 + 0x90);
            FUN_1083cbb18(plVar7,&UNK_10f48da57);
            uVar3 = (iVar14 + uVar13) - iVar23;
            puVar21 = &UNK_10f48da47 + iVar14;
            do {
              uStack_61 = *puVar21;
              func_0x00010832cbe8(*(undefined8 *)(*(long *)(param_2 + 0x98) + 0x10));
              if ((int)uVar13 <= (int)plVar20 + 1) goto LAB_108327388;
              func_0x00010832c784(*(undefined8 *)(*plVar19 + 0x68));
              iVar23 = (int)uVar16 + 1;
              iVar14 = 0;
              iVar5 = (int)plVar7;
              if (iVar5 != 0) {
                iVar14 = iVar23 / iVar5;
              }
              uVar16 = (ulong)((int)uVar16 + 1);
              plVar20 = (long *)(ulong)((int)plVar20 + 1);
              puVar21 = puVar21 + 1;
            } while (iVar23 != iVar14 * iVar5);
          }
          else if (cVar2 == '\b') {
            plVar7 = (long *)(param_2 + 0x90);
            FUN_1083cbb18(plVar7,&UNK_10f48da4c);
            plVar20 = (long *)(ulong)(iVar23 + 1);
            uVar16 = (ulong)(iVar14 + 1);
          }
          else if (cVar2 == '\v') {
            plVar7 = (long *)(param_2 + 0x90);
            FUN_1083cbb18(plVar7,&UNK_10f48da51);
            uVar16 = (ulong)iVar14;
            uVar3 = (iVar14 + uVar13) - iVar23;
            do {
              uStack_61 = (&UNK_10f48da47)[uVar16];
              func_0x00010832cbe8(*(undefined8 *)(*(long *)(param_2 + 0x98) + 0x10));
              if ((int)uVar13 <= (int)plVar20 + 1) goto LAB_108327388;
              func_0x00010832c784(*(undefined8 *)(*plVar19 + 0x60));
              uVar16 = uVar16 + 1;
              plVar20 = (long *)(ulong)((int)plVar20 + 1);
            } while ((long)uVar16 < (long)(int)plVar7);
          }
          else {
            func_0x00010832ce7c();
          }
          goto LAB_10832738c;
        }
        func_0x00010832ce7c();
      }
    }
    if (((int)uVar16 != 0) || (puVar18 != puVar11)) {
      func_0x00010832cae0();
    }
    func_0x00010832c6f8();
    func_0x00010832cae0();
  }
  func_0x00010832c844();
  func_0x00010832cae0();
LAB_108327410:
  func_0x00010832c79c();
  return;
LAB_108327388:
  uVar16 = (ulong)uVar3;
  plVar20 = plVar6;
LAB_10832738c:
  func_0x00010832c784(*(undefined8 *)(*plVar19 + 0x60));
  plVar9 = plVar7;
  func_0x00010832c784(*(undefined8 *)(*plVar19 + 0x68));
  iVar23 = (int)plVar9 * (int)plVar7;
  uVar15 = (uint)uVar16;
  uVar3 = 0;
  if ((int)uVar15 < iVar23) {
    uVar3 = uVar15;
  }
  uVar16 = (ulong)uVar3;
  plVar7 = plVar9;
  if (iVar23 <= (int)uVar15) {
    puVar18 = puVar18 + 1;
  }
  goto LAB_108327220;
}



/* Entry: 10832749c; end: 10832753f;  */

undefined8 FUN_10832749c(undefined8 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  ulong unaff_x19;
  long unaff_x20;
  int iVar5;
  uint uVar6;
  
  func_0x00010832ca38();
  FUN_10832bd9c();
  iVar5 = 0;
  iVar4 = *(int *)(unaff_x20 + 4);
  uVar6 = iVar4 - 1U & param_2;
  while ((iVar5 < iVar4 &&
         (uVar2 = *(uint *)(*(long *)(unaff_x20 + 8) + (long)(int)uVar6 * 0x20), uVar2 != 0))) {
    if (param_2 == uVar2) {
      uVar3 = unaff_x19;
      func_0x000107c278d0();
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      iVar4 = *(int *)(unaff_x20 + 4);
    }
    iVar1 = 0;
    if ((int)uVar6 < 1) {
      iVar1 = iVar4;
    }
    uVar6 = (uVar6 + iVar1) - 1;
    iVar5 = iVar5 + 1;
  }
  return 0;
}



/* Entry: 108327540; end: 10832761f;  */

void FUN_108327540(int *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  uint extraout_w8;
  uint extraout_w9;
  long lVar9;
  undefined8 *puVar10;
  long unaff_x21;
  ulong uVar11;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_40 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar3 = param_1[1];
  iVar4 = uVar3 * 3;
  iVar1 = *param_1 * 4;
  cVar5 = SBORROW4(iVar4,iVar1);
  cVar6 = iVar4 + *param_1 * -4 < 0;
  bVar7 = iVar4 == iVar1;
  if (iVar4 <= iVar1) {
    func_0x00010832cda0();
    uVar2 = extraout_w8;
    if (bVar7 || cVar6 != cVar5) {
      uVar2 = extraout_w9;
    }
    func_0x00010832d018();
    puVar8 = (undefined8 *)(((ulong)(uVar2 >> 1) & 0x3fffffff) << 6 | 0x10);
    __Znam();
    *puVar8 = 0x20;
    puVar8[1] = (ulong)uVar2;
    if (uVar2 != 0) {
      lVar9 = (ulong)uVar2 << 5;
      puVar10 = puVar8 + 2;
      do {
        *(undefined4 *)puVar10 = 0;
        lVar9 = lVar9 + -0x20;
        puVar10 = puVar10 + 4;
      } while (lVar9 != 0);
    }
    *(undefined8 **)(param_1 + 2) = puVar8 + 2;
    lVar9 = unaff_x21 + 8;
    for (uVar11 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)); uVar11 != 0;
        uVar11 = uVar11 - 1) {
      if (*(int *)(lVar9 + -8) != 0) {
        func_0x00010832c6e4();
        FUN_10832bdc4();
      }
      lVar9 = lVar9 + 0x20;
    }
    func_0x00010832b7e4(auStack_38);
  }
  FUN_10832bdc4(param_1,&uStack_50);
  func_0x00010832c8fc();
  return;
}



/* Entry: 108327620; end: 108327667;  */

/* WARNING: Removing unreachable block (ram,0x0001083f1264) */
/* WARNING: Removing unreachable block (ram,0x0001083f12ac) */
/* WARNING: Removing unreachable block (ram,0x0001083f1204) */
/* WARNING: Removing unreachable block (ram,0x0001083f1294) */
/* WARNING: Removing unreachable block (ram,0x0001083f124c) */
/* WARNING: Removing unreachable block (ram,0x0001083f12c4) */
/* WARNING: Removing unreachable block (ram,0x0001083f11f8) */

ulong FUN_108327620(ulong param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  long *unaff_x19;
  long *unaff_x20;
  
  func_0x00010832ca38();
  func_0x00010832c524();
  uVar4 = param_1;
  func_0x00010832c740(*(undefined8 *)(*unaff_x20 + 0x68));
  iVar1 = (int)uVar4 + -1;
  if (iVar1 != 0) {
    func_0x0001083f2998(param_1,*(undefined8 *)*unaff_x19);
    if (((param_1 & 1) == 0) && (func_0x0001083f2998(), (int)param_1 == 0)) {
      func_0x0001083f2998();
      if ((int)param_1 == 0) {
        func_0x0001083f2998();
        iVar3 = (int)param_1;
        if (((param_1 & 1) == 0) && (func_0x0001083f2998(), iVar3 == 0)) {
          func_0x0001083f2998();
          if (iVar3 == 0) {
            func_0x0001083f2998();
            if (iVar3 == 0) {
              func_0x0001083f2998();
              if (iVar3 == 0) {
                func_0x0001083f2998();
                if (iVar3 == 0) {
                  param_1 = *(ulong *)(*unaff_x19 + 0xf0);
                }
                else {
                  switch(iVar1) {
                  case 0:
                    param_1 = *(ulong *)(*unaff_x19 + 0xc0);
                    break;
                  case 1:
                    param_1 = *(ulong *)(*unaff_x19 + 200);
                    break;
                  case 2:
                    param_1 = *(ulong *)(*unaff_x19 + 0xd0);
                    break;
                  case 3:
                    param_1 = *(ulong *)(*unaff_x19 + 0xd8);
                    break;
                  default:
                    func_0x0001083f29e0();
                    goto LAB_1083f12d8;
                  }
                }
              }
              else {
                switch(iVar1) {
                case 0:
                  param_1 = *(ulong *)(*unaff_x19 + 0xa0);
                  break;
                case 1:
                  param_1 = *(ulong *)(*unaff_x19 + 0xa8);
                  break;
                case 2:
                  param_1 = *(ulong *)(*unaff_x19 + 0xb0);
                  break;
                case 3:
                  param_1 = *(ulong *)(*unaff_x19 + 0xb8);
                  break;
                default:
                  func_0x0001083f29e0();
                  goto LAB_1083f12d8;
                }
              }
            }
            else {
              switch(iVar1) {
              case 0:
                param_1 = *(ulong *)(*unaff_x19 + 0x60);
                break;
              case 1:
                param_1 = *(ulong *)(*unaff_x19 + 0x68);
                break;
              case 2:
                param_1 = *(ulong *)(*unaff_x19 + 0x70);
                break;
              case 3:
                param_1 = *(ulong *)(*unaff_x19 + 0x78);
                break;
              default:
                func_0x0001083f29e0();
                goto LAB_1083f12d8;
              }
            }
          }
          else {
            switch(iVar1) {
            case 0:
              param_1 = *(ulong *)(*unaff_x19 + 0x80);
              break;
            case 1:
              param_1 = *(ulong *)(*unaff_x19 + 0x88);
              break;
            case 2:
              param_1 = *(ulong *)(*unaff_x19 + 0x90);
              break;
            case 3:
              param_1 = *(ulong *)(*unaff_x19 + 0x98);
              break;
            default:
              func_0x0001083f29e0();
              goto LAB_1083f12d8;
            }
          }
        }
        else {
          switch(iVar1) {
          case 0:
            param_1 = *(ulong *)(*unaff_x19 + 0x40);
            break;
          case 1:
            param_1 = *(ulong *)(*unaff_x19 + 0x48);
            break;
          case 2:
            param_1 = *(ulong *)(*unaff_x19 + 0x50);
            break;
          case 3:
            param_1 = *(ulong *)(*unaff_x19 + 0x58);
            break;
          default:
            func_0x0001083f29e0();
            goto LAB_1083f12d8;
          }
        }
      }
      else {
        switch(iVar1) {
        case 0:
          param_1 = *(ulong *)(*unaff_x19 + 0x20);
          break;
        case 1:
          param_1 = *(ulong *)(*unaff_x19 + 0x28);
          break;
        case 2:
          param_1 = *(ulong *)(*unaff_x19 + 0x30);
          break;
        case 3:
          param_1 = *(ulong *)(*unaff_x19 + 0x38);
          break;
        default:
          func_0x0001083f29e0();
          goto LAB_1083f12d8;
        }
      }
    }
    else {
      switch(iVar1) {
      case 0:
        param_1 = *(ulong *)*unaff_x19;
        break;
      case 1:
        param_1 = *(ulong *)(*unaff_x19 + 8);
        break;
      case 2:
        param_1 = *(ulong *)(*unaff_x19 + 0x10);
        break;
      case 3:
        param_1 = *(ulong *)(*unaff_x19 + 0x18);
        break;
      default:
        func_0x0001083f29e0();
LAB_1083f12d8:
        FUN_10841076c(&UNK_10f493c61);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1083f12e0);
        (*pcVar2)();
      }
    }
  }
  return param_1;
}



/* Entry: 108327668; end: 10832773f;  */

bool FUN_108327668(long *param_1)

{
  bool bVar1;
  long *plVar2;
  
  if ((*(byte *)(param_1 + 6) >> 4 & 1) != 0) {
    plVar2 = param_1;
    func_0x00010832c838();
    if (((int)plVar2[4] == -1) ||
       (plVar2 = param_1, (**(code **)(*param_1 + 0x18))(),
       *(uint *)(plVar2 + 4) < 0x1e &&
       (1 << (ulong)(*(uint *)(plVar2 + 4) & 0x1f) & 0x3d000000U) != 0)) {
      bVar1 = *(char *)(param_1[4] + 0x2c) != '\n';
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
  return false;
}



/* Entry: 108327740; end: 1083277f3;  */

void FUN_108327740(long param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  ulong uStack_50;
  undefined8 uStack_48;
  
  uVar2 = (uint)&uStack_50;
  uStack_50 = param_2;
  uStack_48 = param_3;
  FUN_10832b6d4();
  iVar6 = 0;
  iVar4 = *(int *)(param_1 + 0x4c);
  uVar7 = iVar4 - 1U & uVar2;
  do {
    if (iVar4 <= iVar6) {
LAB_1083277d8:
      func_0x00010832c604();
      return;
    }
    puVar5 = (uint *)(*(long *)(param_1 + 0x50) + (long)(int)uVar7 * 0x18);
    if (*puVar5 == 0) goto LAB_1083277d8;
    if (uVar2 == *puVar5) {
      uVar3 = uStack_50;
      FUN_10821b208(uStack_50,uStack_48,*(undefined8 *)(puVar5 + 2),*(undefined8 *)(puVar5 + 4));
      if ((uVar3 & 1) != 0) {
        func_0x00010832c39c();
        goto LAB_1083277d8;
      }
      iVar4 = *(int *)(param_1 + 0x4c);
    }
    iVar1 = 0;
    if ((int)uVar7 < 1) {
      iVar1 = iVar4;
    }
    uVar7 = (uVar7 + iVar1) - 1;
    iVar6 = iVar6 + 1;
  } while( true );
}



/* Entry: 1083277f4; end: 108327a87;  */

void FUN_1083277f4(undefined8 *param_1,long *param_2,undefined8 param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  char *pcVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  undefined8 *puVar9;
  int *piVar10;
  uint extraout_w8;
  uint extraout_w8_00;
  long extraout_x8;
  int iVar11;
  uint extraout_w9;
  ulong extraout_x9;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  int *piVar15;
  undefined8 *unaff_x19;
  long *plVar16;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  long lVar17;
  undefined8 unaff_x22;
  undefined8 uVar18;
  undefined1 *unaff_x29;
  code *unaff_x30;
  char acStack_2e1 [57];
  code *pcStack_2a8;
  undefined1 auStack_2a0 [104];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [32];
  undefined8 auStack_200 [42];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x00010832c7d0();
  lVar17 = param_1[0x2e];
  if (lVar17 != 0) {
    param_1 = (undefined8 *)&stack0xffffffffffffff88;
    FUN_10832bed4();
    func_0x00010832d078(*(undefined4 *)(lVar17 + 4));
    uVar12 = extraout_x9;
    for (uVar1 = extraout_w8 & ((int)extraout_w8 >> 0x1f ^ 0xffffffffU); uVar1 != 0;
        uVar1 = uVar1 - 1) {
      iVar11 = (int)uVar12;
      piVar15 = (int *)(*(long *)(lVar17 + 8) + (long)iVar11 * 0x28);
      if (*piVar15 == 0) break;
      if (((int)param_1 == *piVar15) && (unaff_x20 == *(undefined8 **)(piVar15 + 2))) {
        piVar10 = (int *)(long)*(char *)((long)piVar15 + 0x27);
        param_1 = unaff_x19;
        pcStack_2a8 = unaff_x30;
        if ((long)piVar10 < 0) {
          param_4 = *(int **)(piVar15 + 4);
          piVar10 = *(int **)(piVar15 + 6);
        }
        else {
          param_4 = piVar15 + 4;
        }
        goto FUN_108323b10;
      }
      uVar2 = 0;
      if (iVar11 < 1) {
        uVar2 = extraout_w8;
      }
      uVar12 = (ulong)((iVar11 + uVar2) - 1);
    }
    if ((*(char *)(lVar17 + 0x90) == '\x01') &&
       (param_1 = unaff_x20, FUN_1083d6eb4(), ((ulong)param_1 & 1) == 0)) {
      func_0x00010832c814(&uStack_90);
      func_0x00010832c710(uStack_80._7_1_);
      func_0x00010832c604();
      uVar18 = unaff_x19[8];
      unaff_x19[8] = unaff_x19[0x2e] + 0x50;
      func_0x00010832c710(uStack_80._7_1_);
      func_0x00010832c604();
      func_0x00010832c9f0();
      func_0x00010832c400();
      func_0x00010832c6e4();
      FUN_1083242ec();
      func_0x00010832c468();
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      piVar15 = (int *)unaff_x19[0x2e];
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_a0 = 0;
      uVar1 = piVar15[1];
      iVar4 = uVar1 * 3;
      iVar11 = *piVar15 * 4;
      cVar6 = SBORROW4(iVar4,iVar11);
      cVar7 = iVar4 + *piVar15 * -4 < 0;
      bVar8 = iVar4 == iVar11;
      if (iVar4 <= iVar11) {
        func_0x00010832cda0();
        uVar2 = extraout_w8_00;
        if (bVar8 || cVar7 != cVar6) {
          uVar2 = extraout_w9;
        }
        *piVar15 = 0;
        piVar15[1] = uVar2;
        lVar17 = *(long *)(piVar15 + 2);
        piVar15[2] = 0;
        piVar15[3] = 0;
        puVar9 = (undefined8 *)((ulong)uVar2 * 0x28 + 0x10);
        __Znam();
        *puVar9 = 0x28;
        puVar9[1] = (ulong)uVar2;
        if (uVar2 != 0) {
          lVar13 = (ulong)uVar2 * 0x28;
          puVar14 = puVar9 + 2;
          do {
            *(undefined4 *)puVar14 = 0;
            lVar13 = lVar13 + -0x28;
            puVar14 = puVar14 + 5;
          } while (lVar13 != 0);
        }
        *(undefined8 **)(piVar15 + 2) = puVar9 + 2;
        lVar17 = lVar17 + 8;
        for (uVar12 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar12 != 0;
            uVar12 = uVar12 - 1) {
          if (*(int *)(lVar17 + -8) != 0) {
            FUN_10832bef4(piVar15,lVar17);
          }
          lVar17 = lVar17 + 0x28;
        }
        func_0x00010832b91c(&stack0xffffffffffffffa8);
      }
      FUN_10832bef4(piVar15,&stack0xffffffffffffff88);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_70);
      func_0x00010832c8fc();
      unaff_x19[8] = uVar18;
      func_0x00010832c8cc();
      return;
    }
  }
  func_0x00010832c6e4();
  unaff_x29 = &stack0xfffffffffffffff0;
  func_0x00010832d02c();
  uVar1 = *(int *)((long)param_2 + 0xc) - 0x19;
  bVar8 = uVar1 == 0x19;
  if (uVar1 < 0x1a) {
    func_0x00010832c7d0();
                    /* WARNING: Could not recover jumptable at 0x00010832433c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(ushort *)(&UNK_10df1a5f0 + extraout_x8 * 2) * 4 + 0x108324340))();
    return;
  }
  func_0x00010832c2a0();
  if (bVar8) {
    func_0x00010832cf78(unaff_x30);
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_220);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_238);
  unaff_x19 = auStack_200;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010832c694();
  pcStack_2a8 = FUN_1083258f4;
  lVar17 = param_2[2];
  FUN_108324294();
  func_0x00010832cb90();
  puVar9 = unaff_x19;
  func_0x00010832cb58();
  func_0x00010832c9e8(*(undefined8 *)(*param_2 + 0x48));
  pcVar5 = "";
  for (lVar17 = lVar17 << 3; lVar17 != 0; lVar17 = lVar17 + -8) {
    _strlen(pcVar5);
    func_0x00010832c3b4();
    FUN_1083242ec(unaff_x19,*puVar9,0x11);
    pcVar5 = ", ";
    puVar9 = puVar9 + 1;
  }
  piVar10 = param_4;
  _strlen();
  register0x00000008 = (BADSPACEBASE *)auStack_2a0;
FUN_108323b10:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = param_1;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = pcStack_2a8;
  *(int **)((long)register0x00000008 + -0x40) = param_4;
  *(int **)((long)register0x00000008 + -0x38) = piVar10;
  if (piVar10 != (int *)0x0) {
    if ((*(char *)(unaff_x19 + 0x23) == '\x01') && (*(char *)(unaff_x19 + 0x2f) == '\x01')) {
      for (iVar11 = 0; iVar11 < *(int *)((long)unaff_x19 + 0x114); iVar11 = iVar11 + 1) {
        (**(code **)(*(long *)unaff_x19[8] + 0x10))((long *)unaff_x19[8],&DAT_10f48d515);
      }
    }
    plVar16 = (long *)unaff_x19[8];
    func_0x000107c27958((undefined1 *)((long)register0x00000008 + -0x58),
                        (undefined1 *)((long)register0x00000008 + -0x40));
    puVar3 = *(undefined1 **)((long)register0x00000008 + -0x58);
    if (-1 < *(char *)((long)register0x00000008 + -0x41)) {
      puVar3 = (undefined1 *)((long)register0x00000008 + -0x58);
    }
    (**(code **)(*plVar16 + 0x10))(plVar16,puVar3);
    func_0x00010832c6dc();
    *(undefined1 *)(unaff_x19 + 0x23) = 0;
  }
  return;
}



/* Entry: 108327a88; end: 108327aef;  */

long FUN_108327a88(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  FUN_10831d980();
  if (lVar1 == 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    FUN_10831d928(param_1,*param_2,&uStack_48);
    func_0x00010832c6dc();
    lVar1 = param_1;
  }
  return lVar1;
}



/* Entry: 108327af0; end: 1083280db;  */

void FUN_108327af0(undefined8 param_1,long *param_2,long *param_3)

{
  undefined8 *******pppppppuVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  long *plVar6;
  undefined1 *puVar7;
  long unaff_x19;
  long *unaff_x20;
  long lVar8;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 ******appppppuStack_a8 [2];
  char cStack_91;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x00010832c7d0();
  (**(code **)(*param_2 + 0xe0))();
  iVar3 = (int)param_2;
  if ((iVar3 == 0) || (func_0x00010832c854(*(undefined8 *)(*param_3 + 0xe0)), iVar3 == 0)) {
    iVar3 = 0;
    func_0x00010832c740(*(undefined8 *)(*unaff_x20 + 0xf0));
    if ((iVar3 == 0) || (func_0x00010832c854(*(undefined8 *)(*param_3 + 0xf0)), iVar3 == 0)) {
      iVar3 = 0;
      func_0x00010832c740(*(undefined8 *)(*unaff_x20 + 0xd8));
      if (iVar3 == 0) {
        return;
      }
      func_0x00010832c854(*(undefined8 *)(*param_3 + 0xd8));
      if (iVar3 == 0) {
        return;
      }
      func_0x00010832c434(auStack_c0);
      func_0x0001004c3cd0(appppppuStack_a8,&UNK_10f48dde7,auStack_c0);
      func_0x00010048a6c8(auStack_90,appppppuStack_a8,":");
      func_0x00010832c5cc(auStack_d8);
      puVar7 = auStack_90;
      func_0x00010533a9c0(auStack_78,puVar7,auStack_d8);
      func_0x00010832cba0();
      func_0x00010832c85c();
      func_0x00010832c940();
      func_0x00010832c984();
      func_0x00010832c9a4();
      if (((ulong)puVar7 & 1) != 0) goto LAB_108327fbc;
      func_0x00010832c9bc();
      func_0x00010832c998();
      func_0x00010832c85c();
      func_0x00010832c434(appppppuStack_a8);
      func_0x00010832c5cc(auStack_c0);
      func_0x00010832c434(auStack_d8);
      func_0x00010832c5cc(auStack_f0);
      FUN_1083cbb18(unaff_x19 + 0xd0,&UNK_10f48ddf2);
      func_0x00010832c90c();
      func_0x00010832cba0();
      func_0x00010832c984();
      func_0x00010832c940();
      func_0x00010832c434(appppppuStack_a8);
      cVar2 = cStack_91;
      pppppppuVar1 = (undefined8 *******)appppppuStack_a8[0];
      puVar7 = auStack_c0;
      func_0x00010832c5cc();
      if (-1 < cVar2) {
        pppppppuVar1 = appppppuStack_a8;
      }
      func_0x00010832caa0(pppppppuVar1);
      func_0x00010832c8c4();
      func_0x00010832c984();
      func_0x00010832c940();
      iVar3 = 0;
      while( true ) {
        iVar4 = (int)puVar7;
        func_0x00010832ce40();
        func_0x00010832c740();
        if (iVar4 <= iVar3) break;
        puVar7 = (undefined1 *)(unaff_x19 + 0x90);
        FUN_1083cbb18(puVar7,&UNK_10f48de9e);
        iVar3 = iVar3 + 1;
      }
      func_0x00010832c434(appppppuStack_a8);
      func_0x00010832c5cc(auStack_c0);
      if (-1 < cStack_91) {
        appppppuStack_a8[0] = appppppuStack_a8;
      }
      func_0x00010832caa0(appppppuStack_a8[0]);
      func_0x00010832c8c4();
    }
    else {
      func_0x00010832c434(auStack_90);
      puVar5 = &UNK_10f48e263;
      puVar7 = auStack_90;
      func_0x0001004c3cd0(auStack_78);
      func_0x00010832c85c();
      func_0x00010832c9a4();
      if (((ulong)puVar5 & 1) != 0) goto LAB_108327fbc;
      func_0x00010832c9bc();
      func_0x00010832c998();
      func_0x00010832c85c();
      func_0x00010832d058();
      func_0x00010832ca98();
      for (lVar8 = (long)puVar7 * 0x58; lVar8 != 0; lVar8 = lVar8 + -0x58) {
        FUN_108327af0();
      }
      func_0x00010832c434(appppppuStack_a8);
      func_0x00010832c434(auStack_c0);
      func_0x00010832c434(auStack_d8);
      func_0x00010832c434(auStack_f0);
      FUN_1083cbb18(unaff_x19 + 0xd0,&UNK_10f48e273);
      func_0x00010832c90c();
      func_0x00010832cba0();
      func_0x00010832c984();
      func_0x00010832c940();
      func_0x00010832c434(appppppuStack_a8);
      cVar2 = cStack_91;
      pppppppuVar1 = (undefined8 *******)appppppuStack_a8[0];
      puVar7 = auStack_c0;
      func_0x00010832c434();
      if (-1 < cVar2) {
        pppppppuVar1 = appppppuStack_a8;
      }
      func_0x00010832caa0(pppppppuVar1);
      puVar5 = &UNK_10f48e300;
      func_0x00010832c8c4();
      func_0x00010832c984();
      func_0x00010832c940();
      func_0x00010832d058();
      func_0x00010832ca98();
      for (lVar8 = (long)puVar5 * 0x58; lVar8 != 0; lVar8 = lVar8 + -0x58) {
        plVar6 = *(long **)(puVar7 + 0x50);
        (**(code **)(*plVar6 + 0xe0))();
        puVar5 = &UNK_10f48e34f;
        if ((int)plVar6 == 0) {
          puVar5 = &UNK_10f48e38b;
        }
        FUN_1083cbb18(unaff_x19 + 0x90,puVar5);
        puVar7 = puVar7 + 0x58;
      }
      func_0x00010832c434(appppppuStack_a8);
      func_0x00010832c434(auStack_c0);
      if (-1 < cStack_91) {
        appppppuStack_a8[0] = appppppuStack_a8;
      }
      func_0x00010832caa0(appppppuStack_a8[0]);
      func_0x00010832c8c4();
    }
    func_0x00010832c984();
    func_0x00010832c940();
  }
  else {
    func_0x00010832c488();
    func_0x00010832c488();
    func_0x00010832c704();
    FUN_108327af0();
    puVar7 = auStack_78;
    func_0x000107c278b8(puVar7,&UNK_10f48dfeb);
    func_0x00010832c9a4();
    if (((ulong)puVar7 & 1) == 0) {
      func_0x00010832c9bc();
      func_0x00010832c998();
      func_0x00010832c85c();
      func_0x00010818662c(unaff_x19 + 0xd8,&UNK_10f48dffc);
      func_0x00010832ce88();
    }
  }
LAB_108327fbc:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  return;
}



/* Entry: 1083280dc; end: 1083281c3;  */

void FUN_1083280dc(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar2 = 0;
  FUN_108323c24(auStack_70);
  func_0x000107525ea8(auStack_58,auStack_70,0x28);
  func_0x00010832c8fc();
  FUN_10831cc90();
  (**(code **)(*param_3 + 0x80))();
  iVar3 = (int)param_3 + 1;
  while (iVar3 = iVar3 + -1, iVar3 != 0) {
    uVar1 = 0x113254db0;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0x113254dc8;
    }
    func_0x0001004c3ca0(auStack_58,uVar1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(auStack_58,"1.0");
    uVar2 = 0;
  }
  func_0x00010076de84(param_1,auStack_58,0x29);
  func_0x00010832cb50();
  return;
}



/* Entry: 1083281c4; end: 108328327;  */

void FUN_1083281c4(undefined8 param_1,long *param_2,uint param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  char *unaff_x19;
  long *plVar10;
  undefined8 unaff_x20;
  int iVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  char acStack_2e1 [641];
  
  func_0x00010832c7d0();
  pcVar8 = *(char **)(param_4 + 0x10);
  func_0x00010832c5ec();
  if ((int)pcVar8 != 0) {
    func_0x00010832ca18();
    (**(code **)(extraout_x8_00 + 0x40))();
    if (((uint)pcVar8 < 3 && param_3 < 0x20) && (1 << (ulong)(param_3 & 0x1f) & 0xffc0707fU) != 0) {
      pcVar8 = &stack0xffffffffffffffa7;
      FUN_1083cb2fc();
      if (((uint)pcVar8 & 0xff) != 2) {
        func_0x00010832c28c();
        FUN_1083280dc(&stack0xffffffffffffffa8);
        func_0x00010832c604();
        func_0x00010832c6dc();
        func_0x00010832d040();
        func_0x00010832c400();
        func_0x00010832c6e4();
        FUN_1083242ec();
        func_0x00010832c2d0();
        return;
      }
    }
  }
  if ((param_3 & 0xfe) == 0x10) {
    func_0x00010832ca18();
    (**(code **)(extraout_x8_01 + 0xe0))();
    if ((int)pcVar8 != 0) {
      param_4 = &UNK_10f48e40d;
      pcVar6 = unaff_x19;
      func_0x00010832cecc();
      func_0x00010832c6e4();
      FUN_1083242ec();
      func_0x00010832c350();
      pcVar4 = (char *)register0x00000008;
      pcVar8 = unaff_x19;
      goto FUN_108323b10;
    }
  }
  func_0x00010832c6e4();
  unaff_x29 = &stack0xfffffffffffffff0;
  pcVar4 = acStack_2e1 + 0x41;
  func_0x00010832d02c();
  uVar2 = *(int *)((long)param_2 + 0xc) - 0x19;
  bVar5 = uVar2 == 0x19;
  if (uVar2 < 0x1a) {
    func_0x00010832c7d0();
                    /* WARNING: Could not recover jumptable at 0x00010832433c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(ushort *)(&UNK_10df1a5f0 + extraout_x8 * 2) * 4 + 0x108324340))();
    return;
  }
  func_0x00010832c2a0();
  if (bVar5) {
    func_0x00010832cf78(unaff_x30);
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(acStack_2e1 + 0xc1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(acStack_2e1 + 0xa9);
  pcVar6 = acStack_2e1 + 0xe1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010832c694();
  lVar9 = param_2[2];
  FUN_108324294();
  func_0x00010832cb90();
  pcVar7 = pcVar6;
  func_0x00010832cb58();
  func_0x00010832c9e8(*(undefined8 *)(*param_2 + 0x48));
  pcVar3 = "";
  for (lVar9 = lVar9 << 3; lVar9 != 0; lVar9 = lVar9 + -8) {
    _strlen(pcVar3);
    func_0x00010832c3b4();
    FUN_1083242ec(pcVar6,*(undefined8 *)pcVar7,0x11);
    pcVar3 = ", ";
    pcVar7 = pcVar7 + 8;
  }
  param_5 = param_4;
  _strlen();
  unaff_x30 = FUN_1083258f4;
FUN_108323b10:
  *(undefined8 *)(pcVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(pcVar4 + -0x28) = unaff_x21;
  *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
  *(char **)(pcVar4 + -0x18) = pcVar8;
  *(undefined1 **)(pcVar4 + -0x10) = unaff_x29;
  *(code **)(pcVar4 + -8) = unaff_x30;
  *(undefined **)(pcVar4 + -0x40) = param_4;
  *(undefined **)(pcVar4 + -0x38) = param_5;
  if (param_5 != (undefined *)0x0) {
    if ((pcVar6[0x118] == '\x01') && (pcVar6[0x178] == '\x01')) {
      for (iVar11 = 0; iVar11 < *(int *)(pcVar6 + 0x114); iVar11 = iVar11 + 1) {
        (**(code **)(**(long **)(pcVar6 + 0x40) + 0x10))(*(long **)(pcVar6 + 0x40),&DAT_10f48d515);
      }
    }
    plVar10 = *(long **)(pcVar6 + 0x40);
    func_0x000107c27958(pcVar4 + -0x58,pcVar4 + -0x40);
    puVar1 = *(undefined1 **)(pcVar4 + -0x58);
    if (-1 < pcVar4[-0x41]) {
      puVar1 = pcVar4 + -0x58;
    }
    (**(code **)(*plVar10 + 0x10))(plVar10,puVar1);
    func_0x00010832c6dc();
    pcVar6[0x118] = '\0';
  }
  return;
}



/* Entry: 108328328; end: 10832835f;  */

void FUN_108328328(long param_1)

{
  undefined1 uStack_11;
  
  uStack_11 = (undefined1)param_1;
  if (param_1 != 10) {
    FUN_1083cb27c(&uStack_11);
  }
  return;
}



/* Entry: 108328360; end: 108328497;  */

int FUN_108328360(undefined8 param_1,undefined **param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  uint extraout_w8;
  long *plVar7;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined **extraout_x10;
  long *plVar8;
  uint extraout_w11;
  long lVar9;
  undefined8 uVar10;
  undefined8 extraout_x12;
  int *piVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  undefined **ppuStack_48;
  
  func_0x00010832ca38();
  pppuVar6 = &ppuStack_48;
  ppuStack_48 = param_2;
  FUN_10832c1bc();
  func_0x00010832d078(*(undefined4 *)(unaff_x20 + 0x124));
  uVar1 = extraout_w8 & ((int)extraout_w8 >> 0x1f ^ 0xffffffffU);
  uVar10 = 0x18;
  uVar4 = extraout_x9;
  ppuVar5 = ppuStack_48;
  while (uVar1 != 0) {
    piVar11 = (int *)(*(long *)(unaff_x20 + 0x128) + (long)(int)uVar4 * (long)(int)uVar10);
    if (*piVar11 == 0) break;
    if (((int)pppuVar6 == *piVar11) && (ppuVar5 == *(undefined ***)(piVar11 + 2))) {
      return piVar11[4];
    }
    func_0x00010832c864();
    uVar10 = extraout_x12;
    uVar4 = extraout_x9_00;
    ppuVar5 = extraout_x10;
    uVar1 = extraout_w11;
  }
  FUN_108329b20(unaff_x20 + 0x120);
  lVar9 = *(long *)(unaff_x20 + 8);
  plVar7 = *(long **)(lVar9 + 0x38);
  plVar8 = *(long **)(lVar9 + 0x50);
  plVar3 = *(long **)(lVar9 + 0x58);
  while( true ) {
    if (plVar7 == *(long **)(lVar9 + 0x40) && plVar8 == plVar3) {
      return 0;
    }
    plVar2 = plVar7;
    if (plVar8 != plVar3) {
      plVar2 = plVar8;
    }
    lVar12 = *plVar2;
    if ((*(int *)(lVar12 + 0xc) == 1) && (*(long *)(lVar12 + 0x10) == unaff_x19)) break;
    lVar12 = 8;
    if (plVar8 != plVar3) {
      lVar12 = 0;
    }
    plVar7 = (long *)((long)plVar7 + lVar12);
    lVar12 = 0;
    if (plVar8 != plVar3) {
      lVar12 = 8;
    }
    plVar8 = (long *)((long)plVar8 + lVar12);
  }
  ppuStack_48 = &PTR_DAT_110a3c8a8;
  if (*(long *)(lVar12 + 0x18) != 0) {
    func_0x0001083c2868(&ppuStack_48);
  }
  FUN_108329b20(unaff_x20 + 0x120);
  return 0;
}



/* Entry: 108328498; end: 108328d13;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108328498(long param_1)

{
  char *pcVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  char cVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  uint extraout_w8;
  long lVar17;
  long extraout_x8;
  long extraout_x8_00;
  uint extraout_w9;
  ulong unaff_x19;
  long *unaff_x20;
  uint uVar18;
  ulong *puVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  ulong uVar22;
  undefined8 unaff_x30;
  undefined1 auStack_a8 [48];
  undefined8 auStack_78 [3];
  
  func_0x00010832c7d0();
  pcVar1 = "";
  if (*(char *)(*(long *)(param_1 + 8) + 0x68) != '\0') {
    pcVar1 = "_globals._anonInterface0->u_skRTFlip";
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
            (param_1 + 0x148,pcVar1);
  if (*(char *)((long)unaff_x20 + 0x56) == '\x01') {
    func_0x00010832c530();
    if (6 < extraout_w8) {
      uVar13 = *(undefined8 *)(unaff_x19 + 0x20);
      puVar15 = &UNK_10f48e5ab;
      uVar14 = 0xffffff;
      uVar16 = 0x1b;
LAB_108328cb8:
      FUN_1083c8a60(uVar13,uVar14,puVar15,uVar16);
      uVar13 = 0;
      goto LAB_108328bb0;
    }
    uVar18 = 1 << (ulong)(extraout_w8 & 0x1f);
    uVar6 = (uVar18 & 0x29) == 0 && (uVar18 & 0x52) == 0;
    func_0x00010832c604();
    func_0x00010832c504();
    if (!(bool)uVar6) {
      func_0x00010832d04c();
      FUN_108323b10();
      func_0x00010832c8d4();
    }
    if (*(int *)(unaff_x19 + 0x140) != -1) {
      func_0x00010832c6f0();
      func_0x00010832c328();
      __ZNSt3__19to_stringEi(auStack_a8,*(undefined4 *)(unaff_x19 + 0x140));
      func_0x00010832c81c(&UNK_10f48e5df);
      func_0x00010832c76c();
      func_0x00010832c40c();
      func_0x00010832c604();
      func_0x00010832c6d4();
      func_0x00010832c8cc();
      func_0x00010832c6dc();
      func_0x00010832c8d4();
    }
    lVar17 = *(long *)(unaff_x19 + 8);
    puVar19 = *(ulong **)(lVar17 + 0x38);
    puVar3 = *(ulong **)(lVar17 + 0x40);
    puVar21 = *(ulong **)(lVar17 + 0x50);
    puVar4 = *(ulong **)(lVar17 + 0x58);
    while( true ) {
      bVar8 = puVar19 == puVar3;
      bVar7 = bVar8 && puVar4 <= puVar21;
      bVar8 = bVar8 && puVar21 == puVar4;
      if (bVar8) break;
      puVar2 = puVar19;
      if (puVar21 != puVar4) {
        puVar2 = puVar21;
      }
      uVar22 = *puVar2;
      if (*(int *)(uVar22 + 0xc) == 4) {
        uVar11 = uVar22;
        FUN_108328d14();
        func_0x000107c27944();
        if ((uVar11 & 1) == 0) {
          func_0x00010832c6f0();
          func_0x00010832c328();
          if ((*(uint *)(*(long *)(uVar22 + 0x10) + 0x30) >> 9 & 1) != 0) {
            func_0x00010832c84c();
          }
          func_0x00010832c604();
          func_0x00010832c898();
          func_0x00010832c670();
          auStack_78[0] = *(undefined8 *)(*(long *)(uVar22 + 0x10) + 0x20);
          FUN_108327a88(unaff_x19 + 0x58,auStack_78);
          func_0x00010832c5d8();
          func_0x00010832c604();
          func_0x00010832ce9c();
          lVar17 = *(long *)(uVar22 + 0x10);
          func_0x00010832c838();
          iVar9 = *(int *)(lVar17 + 0xc);
          if (iVar9 < 0) {
            func_0x00010832c8b8();
            iVar9 = *(int *)(extraout_x8 + 0x18);
          }
          __ZNSt3__19to_stringEi(auStack_78,iVar9);
          func_0x00010832c40c();
          func_0x00010832c604();
          func_0x00010832c6d4();
          goto LAB_108328a88;
        }
      }
      else if (*(int *)(uVar22 + 0xc) == 3) {
        lVar17 = *(long *)(*(long *)(uVar22 + 0x10) + 0x10);
        plVar10 = *(long **)(lVar17 + 0x20);
        cVar5 = *(char *)((long)plVar10 + 0x2c);
        bVar8 = cVar5 == '\n' || cVar5 == '\x06';
        if (cVar5 == '\n' || cVar5 == '\x06') {
          (**(code **)(*plVar10 + 0xa0))();
          if ((int)plVar10 != 1) {
            uVar13 = *(undefined8 *)(unaff_x19 + 0x20);
            uVar14 = *(undefined4 *)(uVar22 + 8);
            puVar15 = &UNK_10f48d539;
            uVar16 = 0x1e;
            goto LAB_108328cb8;
          }
          func_0x00010832cd00();
          if (*(int *)((long)plVar10 + 0xc) < 0) {
            func_0x00010832c8b8();
          }
          func_0x00010832c6f0();
          func_0x00010832c328();
          plVar10 = *(long **)(lVar17 + 0x20);
          if (cVar5 == '\x06') {
            (**(code **)(*plVar10 + 0x58))(plVar10);
            func_0x00010832c898();
            func_0x00010832c3c4();
            func_0x00010832c828();
            func_0x00010832c2b8();
            func_0x00010832c680();
            func_0x00010832cb18();
            func_0x00010832c9d4();
            func_0x00010832c40c();
            func_0x00010832c604();
            func_0x00010832c6d4();
            func_0x00010832cc68();
            func_0x00010832c828();
            func_0x00010832c2b8();
            func_0x00010832c84c();
            func_0x00010832cb18();
            func_0x00010832c9d4();
            func_0x00010832c40c();
            func_0x00010832c604();
          }
          else {
            func_0x00010832c898();
            func_0x00010832c3c4();
            func_0x00010832c828();
            func_0x00010832c2b8();
            func_0x00010832cb18();
            func_0x00010832c9d4();
            func_0x00010832c40c();
            func_0x00010832c604();
          }
          func_0x00010832c6d4();
LAB_108328a88:
          FUN_108323b10();
          func_0x00010832c8d4();
        }
        else {
          func_0x00010832c504();
          if (bVar8) {
            func_0x00010832cd00();
            uVar18 = (int)plVar10[4] - 0x18;
            if ((uVar18 < 6) && ((0x3dU >> (ulong)(uVar18 & 0x1f) & 1) != 0)) {
              func_0x00010832c6f0();
              func_0x00010832c328();
              func_0x00010832c898();
              func_0x00010832c3c4();
              func_0x00010832c604();
              goto LAB_108328a88;
            }
          }
        }
      }
      lVar17 = 8;
      if (puVar21 != puVar4) {
        lVar17 = 0;
      }
      puVar19 = (ulong *)((long)puVar19 + lVar17);
      lVar17 = 0;
      if (puVar21 != puVar4) {
        lVar17 = 8;
      }
      puVar21 = (ulong *)((long)puVar21 + lVar17);
    }
    func_0x00010832cfa4();
    if (!bVar7 || bVar8) {
      func_0x00010832cff0();
      if (!bVar8) {
        if ((*(char *)(extraout_x8_00 + 0x68) != '\0') && (*(int *)(unaff_x19 + 0x58) == 0)) {
          func_0x00010832c6f0();
          func_0x00010832c328();
          FUN_108323b10();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                    (unaff_x19 + 0x148,&UNK_10f48e73c);
          func_0x00010832c8d4();
        }
        func_0x00010832c6f0();
        func_0x00010832c328();
        uVar22 = unaff_x19;
        FUN_108323b10();
        uVar18 = (uint)uVar22;
        func_0x00010832c6e4();
        FUN_108328360();
        if ((uVar18 >> 5 & 1) != 0) {
          FUN_108323b10();
        }
        if ((*(char *)(*(long *)(unaff_x19 + 8) + 0x69) == '\x01') &&
           (*(long *)(*(long *)(unaff_x19 + 0x38) + 0x50) != 0)) {
          func_0x000107c278b8(auStack_a8);
          func_0x00010832c81c(&UNK_10f48e7c1);
          func_0x00010832c76c();
          func_0x00010832c40c();
          func_0x00010832c604();
          func_0x00010832c6d4();
          func_0x00010832c8cc();
          func_0x00010832c6dc();
        }
        goto LAB_108328af4;
      }
      if ((extraout_w9 & 0x52) != 0) {
        func_0x00010832c6f0();
        func_0x00010832c328();
        goto LAB_108328af0;
      }
    }
  }
  else {
    func_0x00010832c898();
    func_0x00010832c8e0();
    func_0x00010832c39c();
    FUN_1083e425c(auStack_78);
    func_0x00010832c40c();
    FUN_108327740();
    func_0x00010832c6d4();
    func_0x00010832c28c();
    func_0x00010832c6e4();
    FUN_108328360();
    uVar18 = (uint)unaff_x19;
    if ((unaff_x19 & 1) != 0) {
      FUN_108323b10();
      func_0x00010832ce9c();
      func_0x00010832c8d4();
    }
    if ((uVar18 >> 1 & 1) != 0) {
      func_0x00010832c6f0();
      func_0x00010832c328();
      func_0x00010832ca6c();
      func_0x00010832c8d4();
    }
    if ((uVar18 >> 2 & 1) != 0) {
      func_0x00010832c6f0();
      func_0x00010832c328();
      func_0x00010832cee0();
      func_0x00010832c8d4();
    }
    if ((uVar18 >> 3 & 1) != 0) {
      func_0x00010832c6f0();
      func_0x00010832c328();
      FUN_108323b10();
      func_0x00010832c8d4();
    }
    if ((uVar18 >> 4 & 1) != 0) {
      func_0x00010832c6f0();
      func_0x00010832c328();
      func_0x00010832cd28();
      func_0x00010832c8d4();
    }
    if ((uVar18 >> 5 & 1) != 0) {
      func_0x00010832c6f0();
      func_0x00010832c328();
      func_0x00010832ca6c();
      func_0x00010832c8d4();
    }
    if ((uVar18 >> 6 & 1) != 0) {
      func_0x00010832c6f0();
      func_0x00010832c328();
      func_0x00010832ca60();
      func_0x00010832c8d4();
    }
    if ((uVar18 >> 7 & 1) != 0) {
      func_0x00010832c6f0();
      func_0x00010832c328();
      func_0x00010832cee0();
      func_0x00010832c8d4();
    }
    if ((uVar18 >> 8 & 1) != 0) {
      func_0x00010832c6f0();
      func_0x00010832c328();
LAB_108328af0:
      FUN_108323b10();
LAB_108328af4:
      func_0x00010832c8d4();
    }
  }
  puVar20 = (undefined8 *)unaff_x20[7];
  for (lVar17 = (long)(int)unaff_x20[8] << 3; lVar17 != 0; lVar17 = lVar17 + -8) {
    plVar10 = (long *)*puVar20;
    if ((*(char *)((long)unaff_x20 + 0x56) != '\x01') ||
       (plVar12 = unaff_x20, FUN_10831cd40(), plVar10 != plVar12)) {
      func_0x00010832c6f0();
      func_0x00010832c328();
      FUN_108328d38();
      func_0x00010832c898();
      if ((*(byte *)(plVar10 + 6) >> 5 & 1) != 0) {
        uVar22 = plVar10[4];
        func_0x00010832cf64();
        if ((uVar22 & 1) == 0) {
          func_0x00010832c928();
          func_0x00010832c60c();
        }
      }
      func_0x00010832c88c();
      func_0x00010832c60c();
      (**(code **)(*plVar10 + 0x38))(plVar10);
      func_0x00010832c2b8();
    }
    puVar20 = puVar20 + 1;
  }
  func_0x00010832c6f8();
  uVar13 = 1;
  func_0x00010832c39c();
LAB_108328bb0:
  func_0x00010832cdd0(uVar13,unaff_x30);
  return;
}



/* Entry: 108328d14; end: 108328d37;  */

undefined1  [16] FUN_108328d14(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
  func_0x00010832c524();
  return *(undefined1 (*) [16])(lVar1 + 0x10);
}



/* Entry: 108328d38; end: 108328da3;  */

void FUN_108328d38(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  uint unaff_w20;
  long *plVar2;
  int iVar3;
  undefined8 ****appppuStack_58 [2];
  char cStack_41;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x00010832c7d0();
  if ((*(char *)(*(long *)(*(long *)(param_1 + 8) + 8) + 1) == '\x02' && (unaff_w20 & 0x30) != 0) ||
     ((unaff_w20 >> 5 & 1) != 0)) {
    param_3 = 7;
    func_0x00010832c604();
  }
  if ((unaff_w20 >> 2 & 1) == 0) {
    return;
  }
  puVar1 = &UNK_10f48d217;
  func_0x00010832c934();
  if (param_3 != 0) {
    puStack_40 = puVar1;
    lStack_38 = param_3;
    if ((*(char *)(param_1 + 0x118) == '\x01') && (*(char *)(param_1 + 0x178) == '\x01')) {
      for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x114); iVar3 = iVar3 + 1) {
        (**(code **)(**(long **)(param_1 + 0x40) + 0x10))(*(long **)(param_1 + 0x40),&DAT_10f48d515)
        ;
      }
    }
    plVar2 = *(long **)(param_1 + 0x40);
    func_0x000107c27958(appppuStack_58,&puStack_40);
    if (-1 < cStack_41) {
      appppuStack_58[0] = appppuStack_58;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2,appppuStack_58[0]);
    func_0x00010832c6dc();
    *(undefined1 *)(param_1 + 0x118) = 0;
  }
  return;
}



/* Entry: 108328da4; end: 10832925b;  */

void FUN_108328da4(ulong param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  uint uVar8;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  ulong unaff_x19;
  long *plVar9;
  ulong unaff_x20;
  ulong *puVar10;
  int iVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  ulong *puVar15;
  ulong *puVar16;
  long lVar17;
  long lVar18;
  long unaff_x30;
  undefined8 ****appppuStack_108 [2];
  char cStack_f1;
  char *pcStack_f0;
  long lStack_e8;
  ulong *puStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  undefined1 auStack_a8 [48];
  undefined1 auStack_78 [24];
  
  func_0x00010832c7d0();
  puVar13 = &UNK_10f48d24c;
  puVar12 = &UNK_10f48d24c;
  puVar16 = (ulong *)&UNK_10f48d254;
  puVar15 = (ulong *)&UNK_10f48d254;
code_r0x000108328e00:
  iVar11 = *(int *)(unaff_x20 + 0xc) + -0xc;
  bVar6 = iVar11 == 0xc;
  switch(iVar11) {
  case 0:
    goto code_r0x000108328fec;
  case 1:
    param_2 = "break;";
    func_0x00010832c934();
    unaff_x30 = param_3;
    goto code_r0x000108329150;
  case 2:
    param_2 = "continue;";
    param_1 = unaff_x19;
    unaff_x30 = 9;
    goto code_r0x000108329150;
  case 3:
    param_2 = "discard_fragment();";
    param_1 = unaff_x19;
    unaff_x30 = 0x13;
    puVar12 = puVar13;
    puVar15 = puVar16;
    goto code_r0x000108329150;
  case 4:
    func_0x00010832c400();
    func_0x00010832ca84();
    func_0x00010832ca8c();
    func_0x00010832c3a8();
    param_2 = ");";
    param_1 = unaff_x19;
    unaff_x30 = 2;
    puVar12 = puVar13;
    puVar15 = puVar16;
    goto code_r0x000108329150;
  case 5:
    func_0x00010832c8b8();
    if (*(char *)(extraout_x8 + 0x1c) == '\x01') {
      iVar11 = (int)*(undefined8 *)(unaff_x20 + 0x10);
      FUN_1083d64e8();
      if (iVar11 == 0) goto LAB_108329214;
    }
    param_3 = 0x12;
code_r0x000108329140:
    FUN_1083242ec();
    param_1 = unaff_x19;
    break;
  case 6:
    if (((*(long *)(unaff_x20 + 0x28) == 0) && (*(long *)(unaff_x20 + 0x30) != 0)) &&
       (*(long *)(unaff_x20 + 0x38) == 0)) {
      func_0x00010832c88c();
      func_0x00010832c950();
code_r0x000108328ecc:
      func_0x00010832c3a8();
    }
    else {
      func_0x00010832c928();
      param_3 = 5;
      FUN_108323b10();
      uVar7 = *(ulong *)(unaff_x20 + 0x28);
      if ((uVar7 == 0) || (func_0x00010832cabc(), (uVar7 & 1) != 0)) {
        func_0x00010832c5bc();
      }
      else {
        func_0x00010832ca84();
      }
      if (*(long *)(unaff_x20 + 0x30) != 0) {
        func_0x00010832c3a8();
      }
      func_0x00010832c5bc();
      if (*(long *)(unaff_x20 + 0x38) != 0) goto code_r0x000108328ecc;
    }
    param_1 = unaff_x19;
    param_2 = ") ";
    func_0x00010832c670();
    puVar10 = (ulong *)(unaff_x20 + 0x40);
    goto code_r0x000108328ee0;
  case 7:
    func_0x00010832c680();
    func_0x00010832c3a8();
    func_0x00010832c670();
    func_0x00010832ca84();
    puVar10 = (ulong *)(unaff_x20 + 0x20);
    if (*puVar10 == 0) goto LAB_108329214;
    param_1 = unaff_x19;
    param_2 = " else ";
    func_0x00010832c84c();
code_r0x000108328ee0:
    unaff_x20 = *puVar10;
    goto code_r0x000108328e00;
  case 8:
    break;
  case 9:
    if (*(long *)(unaff_x19 + 0x160) != 0) {
      uVar8 = (uint)*(byte *)(*(long *)(unaff_x19 + 0x160) + 0x56);
      cVar4 = SBORROW4(uVar8,1);
      cVar5 = (int)(uVar8 - 1) < 0;
      if (uVar8 == 1) {
        if (*(long *)(unaff_x20 + 0x10) != 0) {
          plVar9 = *(long **)(*(long *)(unaff_x20 + 0x10) + 0x10);
          (**(code **)(*plVar9 + 0x38))(plVar9,*(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x38));
          if ((int)plVar9 == 0) {
            uVar14 = *(undefined8 *)(unaff_x19 + 0x20);
            uVar2 = *(undefined4 *)(unaff_x20 + 8);
            (**(code **)(**(long **)(*(long *)(unaff_x20 + 0x10) + 0x10) + 0x10))(auStack_a8);
            func_0x00010832c81c(&UNK_10f48e936);
            func_0x00010832c76c();
            func_0x00010832c40c();
            uVar1 = extraout_x11;
            puVar3 = extraout_x10;
            if (cVar5 == cVar4) {
              uVar1 = extraout_x8_00;
              puVar3 = auStack_78;
            }
            FUN_1083c8a60(uVar14,uVar2,puVar3,uVar1);
            func_0x00010832c6d4();
            func_0x00010832c8cc();
            func_0x00010832c6dc();
          }
          else {
            func_0x00010832ca6c();
            func_0x00010832c3a8();
            func_0x00010832c634();
            FUN_108323bd4();
          }
        }
        FUN_10832925c();
        goto LAB_108329214;
      }
    }
    func_0x00010832c5b0();
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      func_0x00010832c8e0();
      func_0x00010832c39c();
      param_3 = 0x11;
      goto code_r0x000108329140;
    }
    break;
  case 10:
    func_0x00010832ca8c();
    func_0x00010832c3a8();
    FUN_108323bd4();
    func_0x00010832c624();
    plVar9 = *(long **)(*(long *)(unaff_x20 + 0x18) + 0x28);
    for (lVar17 = (long)*(int *)(*(long *)(unaff_x20 + 0x18) + 0x30) << 3; lVar17 != 0;
        lVar17 = lVar17 + -8) {
      lVar18 = *plVar9;
      if ((*(byte *)(lVar18 + 0x10) & 1) == 0) {
        func_0x00010832c6e4();
        FUN_108323b10();
        __ZNSt3__19to_stringEx(auStack_78,*(undefined8 *)(lVar18 + 0x18));
        func_0x00010832c40c();
        func_0x00010832c604();
        func_0x00010832c6d4();
      }
      func_0x00010832cf34();
      uVar7 = *(ulong *)(lVar18 + 0x20);
      func_0x00010832cabc();
      if ((uVar7 & 1) == 0) {
        func_0x00010832c624();
        func_0x00010832ca84();
        func_0x00010832ccc0();
        func_0x00010832c614();
      }
      plVar9 = plVar9 + 1;
    }
    func_0x00010832c614();
    func_0x00010832cdec();
    func_0x00010832c39c();
  default:
    goto LAB_108329214;
  case 0xc:
    func_0x00010832c6e4();
    func_0x00010832cdd0();
    uStack_d0 = unaff_x20;
    func_0x00010832c7d0();
    FUN_108328d38();
    func_0x00010832c898();
    func_0x00010832c8e0();
    func_0x00010832c39c();
    func_0x00010832ca18();
    (**(code **)(extraout_x8_01 + 0x38))();
    func_0x00010832c2b8();
    if (*(long *)(unaff_x20 + 0x28) != 0) {
      func_0x00010832c9f0();
      func_0x00010832c400();
      func_0x00010832c3a8();
    }
    param_2 = ";";
    func_0x00010832c634();
    unaff_x20 = uStack_d0;
    puVar12 = puVar13;
    puVar15 = puVar16;
    goto code_r0x000108323b10;
  }
  param_2 = ";";
  goto code_r0x00010832914c;
code_r0x000108328fec:
  func_0x00010832c754();
  if ((bVar6) || (param_1 = unaff_x20, FUN_10831d998(), (int)param_1 != 0)) {
    param_2 = "{";
    puVar13 = (undefined *)0x1;
    func_0x00010832c634();
    FUN_108323bd4();
    func_0x00010832c624();
  }
  else {
    puVar13 = (undefined *)0x0;
  }
  puVar16 = *(ulong **)(unaff_x20 + 0x28);
  for (lVar17 = (long)*(int *)(unaff_x20 + 0x30) << 3; lVar17 != 0; lVar17 = lVar17 + -8) {
    param_1 = *puVar16;
    func_0x00010832cabc();
    if ((param_1 & 1) == 0) {
      param_2 = (char *)*puVar16;
      func_0x00010832ca84();
      func_0x00010832ccc0();
    }
    puVar16 = puVar16 + 1;
  }
  if ((int)puVar13 != 0) {
    func_0x00010832c614();
    func_0x00010832cdec();
    unaff_x20 = 0;
code_r0x00010832914c:
    func_0x00010832c634();
    unaff_x30 = param_3;
    puVar12 = puVar13;
    puVar15 = puVar16;
code_r0x000108329150:
    func_0x00010832cdd0();
code_r0x000108323b10:
    if (unaff_x30 != 0) {
      pcStack_f0 = param_2;
      lStack_e8 = unaff_x30;
      puStack_e0 = puVar15;
      puStack_d8 = puVar12;
      uStack_d0 = unaff_x20;
      if ((*(char *)(param_1 + 0x118) == '\x01') && (*(char *)(param_1 + 0x178) == '\x01')) {
        for (iVar11 = 0; iVar11 < *(int *)(param_1 + 0x114); iVar11 = iVar11 + 1) {
          (**(code **)(**(long **)(param_1 + 0x40) + 0x10))
                    (*(long **)(param_1 + 0x40),&DAT_10f48d515);
        }
      }
      plVar9 = *(long **)(param_1 + 0x40);
      func_0x000107c27958(appppuStack_108,&pcStack_f0);
      if (-1 < cStack_f1) {
        appppuStack_108[0] = appppuStack_108;
      }
      (**(code **)(*plVar9 + 0x10))(plVar9,appppuStack_108[0]);
      func_0x00010832c6dc();
      *(undefined1 *)(param_1 + 0x118) = 0;
    }
    return;
  }
LAB_108329214:
  func_0x00010832cdd0(unaff_x30);
  return;
}



/* Entry: 10832925c; end: 10832929b;  */

void FUN_10832925c(long param_1)

{
  byte bVar1;
  long *plVar2;
  int iVar3;
  undefined8 **appuStack_58 [2];
  char cStack_41;
  undefined *puStack_40;
  long lStack_38;
  
  bVar1 = *(byte *)(*(long *)(*(long *)(param_1 + 8) + 8) + 1);
  if (bVar1 < 7) {
    if (bVar1 == 2) {
      puStack_40 = &UNK_10f48e919;
      lStack_38 = 7;
    }
    else {
      puStack_40 = &UNK_10f48e90c;
      lStack_38 = 0xc;
    }
    if (lStack_38 != 0) {
      if ((*(char *)(param_1 + 0x118) == '\x01') && (*(char *)(param_1 + 0x178) == '\x01')) {
        for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x114); iVar3 = iVar3 + 1) {
          (**(code **)(**(long **)(param_1 + 0x40) + 0x10))
                    (*(long **)(param_1 + 0x40),&DAT_10f48d515);
        }
      }
      plVar2 = *(long **)(param_1 + 0x40);
      func_0x000107c27958(appuStack_58,&puStack_40);
      if (-1 < cStack_41) {
        appuStack_58[0] = appuStack_58;
      }
      (**(code **)(*plVar2 + 0x10))(plVar2,appuStack_58[0]);
      func_0x00010832c6dc();
      *(undefined1 *)(param_1 + 0x118) = 0;
    }
    return;
  }
  return;
}



/* Entry: 10832929c; end: 1083292e7;  */

void FUN_10832929c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 0x20);
  (**(code **)(*plVar1 + 0xe0))();
  if ((int)plVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001083292dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x20) + 0x60))();
    return;
  }
  return;
}



/* Entry: 1083292e8; end: 1083293a7;  */

bool FUN_1083292e8(long *param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  int *unaff_x19;
  long *unaff_x20;
  
  func_0x00010832c7d0();
  do {
    switch(*(undefined1 *)((long)unaff_x20 + 0x2c)) {
    case 0:
    case 4:
    case 0xb:
      func_0x00010832c488();
      unaff_x20 = param_1;
      break;
    case 1:
      return true;
    default:
      return false;
    case 8:
      if (3 < *unaff_x19 - 3U) {
        return true;
      }
      func_0x00010832c740(*(undefined8 *)(*unaff_x20 + 0x40));
      return (int)param_1 != 3;
    case 9:
      func_0x00010832d058();
      func_0x00010832ca98();
      plVar1 = param_1;
      func_0x00010832d058();
      func_0x00010832ca98();
      do {
        if (param_1 == plVar1 + param_2 * 0xb) {
          return true;
        }
        piVar2 = unaff_x19;
        FUN_1083292e8();
        param_1 = param_1 + 0xb;
      } while (piVar2 != (int *)0x0);
      return false;
    }
  } while( true );
}



/* Entry: 1083293a8; end: 1083294fb;  */

uint * FUN_1083293a8(uint *param_1,long *param_2)

{
  uint *puVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  long *plVar10;
  uint *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  uint *puVar13;
  uint *unaff_x19;
  uint *unaff_x20;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [8];
  
  switch(*(undefined1 *)((long)param_2 + 0x2c)) {
  case 0:
    puVar11 = param_1;
    func_0x00010832c440();
    func_0x00010832ccd8();
    break;
  case 1:
  case 8:
    func_0x00010832ca38();
    lVar15 = 1;
    do {
      lVar16 = 1;
code_r0x00010832952c:
      switch((char)unaff_x19[0xb]) {
      case '\0':
      case '\x04':
        func_0x00010832c7ec(*(undefined8 *)(*(long *)unaff_x19 + 0xe8));
        if (((ulong)param_1 & 1) == 0) {
          func_0x00010832c594();
          if ((char)unaff_x19[0xb] == '\0') {
            puVar11 = param_1;
            func_0x00010832c440();
            uVar7 = (uint)puVar11;
            func_0x00010832c9c8();
            if (0 < (int)uVar7) {
              uVar8 = uVar7;
              func_0x00010832c440();
              func_0x00010832ccd8();
              iVar6 = 0;
              if (uVar8 != 0) {
                iVar6 = (int)(uVar7 + uVar8 + -1) / (int)uVar8;
              }
              uVar7 = *unaff_x20;
              FUN_10832ad60(uVar7,(long)(int)(iVar6 * uVar8),(long)(char)unaff_x19[0xb]);
            }
            puVar11 = (uint *)(long)(int)uVar7;
          }
          else {
            if ((char)unaff_x19[0xb] != '\x04') {
              func_0x00010832c7dc();
              func_0x00010832c6b8();
              func_0x00010832d098();
              puVar9 = &UNK_10f48ecc3;
              goto code_r0x000108329740;
            }
            puVar11 = param_1;
            func_0x00010832cf50();
          }
          uVar14 = (long)puVar11 * (long)(int)param_1;
        }
        else {
          uVar14 = 0;
        }
        goto code_r0x0001083296fc;
      default:
        func_0x00010832c7dc();
        func_0x00010832c6b8();
        func_0x00010832d098();
        puVar9 = &UNK_10f48ec89;
code_r0x000108329740:
        FUN_10841076c(puVar9);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(auStack_68);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x108329750);
        (*pcVar5)();
      case '\b':
        func_0x00010832c7a4();
        uVar7 = (uint)param_1;
        if (uVar7 == 3) {
          uVar14 = (ulong)(*unaff_x20 - 7 < 0xfffffffc);
          goto code_r0x0001083296fc;
        }
        if ((((*unaff_x20 == 2) &&
             (func_0x00010832c7ec(*(undefined8 *)(*(long *)unaff_x19 + 0x110)), (int)uVar7 < 0x20))
            && (func_0x00010832c7a4(), uVar7 < 3)) ||
           ((((*unaff_x20 & 0xfffffffd) == 4 &&
             (func_0x00010832c7ec(*(undefined8 *)(*(long *)unaff_x19 + 0x110)), (int)uVar7 < 0x20))
            && (func_0x00010832c7a4(), uVar7 == 0)))) {
          uVar14 = 2;
          goto code_r0x0001083296fc;
        }
      case '\x01':
        uVar14 = 4;
        goto code_r0x0001083296fc;
      case '\t':
        func_0x00010832cc70();
        uVar14 = 0;
        puVar11 = param_1;
        for (lVar17 = (long)param_2 * 0x58; lVar17 != 0; lVar17 = lVar17 + -0x58) {
          func_0x00010832ccd8();
          uVar4 = 0;
          if (puVar11 != (uint *)0x0) {
            uVar4 = uVar14 / (ulong)puVar11;
          }
          lVar12 = uVar14 - uVar4 * (long)puVar11;
          lVar2 = 0;
          if (lVar12 != 0) {
            lVar2 = (long)puVar11 - lVar12;
          }
          puVar11 = unaff_x20;
          FUN_1083294fc(unaff_x20,*(undefined8 *)(param_1 + 0x14));
          uVar14 = (long)puVar11 + lVar2 + uVar14;
          param_1 = param_1 + 0x16;
        }
        func_0x00010832cf50();
        uVar14 = (long)puVar11 + (uVar14 - 1) & -(long)puVar11;
code_r0x0001083296fc:
        return (uint *)(lVar16 * lVar15 * uVar14);
      case '\v':
        if ((*unaff_x20 != 2) || (func_0x00010832c594(), (int)param_1 != 3))
        goto code_r0x000108329560;
        func_0x00010832c440();
        lVar15 = lVar15 * lVar16 * 4;
        unaff_x19 = param_1;
      }
    } while( true );
  default:
    func_0x00010832c7dc();
    func_0x00010832c6b8();
    func_0x00010832d098();
    FUN_10841076c(&UNK_10f48ebf7);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(auStack_58);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1083294fc);
    (*pcVar5)();
  case 4:
    puVar11 = param_1;
    func_0x00010832c440();
    func_0x00010832c9c8();
    func_0x00010832c7ec(*(undefined8 *)(*param_2 + 0x68));
    func_0x00010832ce28();
    puVar11 = (uint *)((long)puVar11 * extraout_x8_00);
    break;
  case 9:
    puVar13 = param_1;
    plVar10 = param_2;
    func_0x00010832cc70();
    puVar11 = (uint *)0x0;
    for (lVar15 = (long)plVar10 * 0x58; lVar15 != 0; lVar15 = lVar15 + -0x58) {
      func_0x00010832ccd8();
      puVar1 = puVar13;
      if (puVar13 <= puVar11) {
        puVar1 = puVar11;
      }
      puVar11 = puVar1;
    }
    cVar3 = *(char *)((long)param_2 + 0x2c);
    uVar7 = *param_1;
    goto code_r0x0001083294bc;
  case 0xb:
    func_0x00010832c440();
    func_0x00010832c9c8();
    func_0x00010832c594();
    func_0x00010832ce28();
    return (uint *)((long)param_1 * extraout_x8);
  }
  cVar3 = *(char *)((long)param_2 + 0x2c);
  uVar7 = *param_1;
code_r0x0001083294bc:
  puVar13 = (uint *)((long)puVar11 + 0xfU & 0xfffffffffffffff0);
  if (uVar7 - 3 < 2 && cVar3 != '\x04') {
    puVar11 = puVar13;
  }
  if (uVar7 == 0) {
    puVar11 = puVar13;
  }
  return puVar11;
code_r0x000108329560:
  func_0x00010832c594();
  iVar6 = (int)param_1;
  func_0x00010832c440();
  lVar16 = lVar16 * iVar6;
  unaff_x19 = param_1;
  goto code_r0x00010832952c;
}



/* Entry: 1083294fc; end: 10832976b;  */

long FUN_1083294fc(uint *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined *puVar8;
  long lVar9;
  uint *unaff_x19;
  uint *unaff_x20;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_68 [24];
  
  func_0x00010832ca38();
  lVar11 = 1;
  do {
    lVar12 = 1;
code_r0x00010832952c:
    switch((char)unaff_x19[0xb]) {
    case '\0':
    case '\x04':
      func_0x00010832c7ec(*(undefined8 *)(*(long *)unaff_x19 + 0xe8));
      if (((ulong)param_1 & 1) == 0) {
        func_0x00010832c594();
        if ((char)unaff_x19[0xb] == '\0') {
          puVar7 = param_1;
          func_0x00010832c440();
          uVar5 = (uint)puVar7;
          func_0x00010832c9c8();
          if (0 < (int)uVar5) {
            uVar6 = uVar5;
            func_0x00010832c440();
            func_0x00010832ccd8();
            iVar4 = 0;
            if (uVar6 != 0) {
              iVar4 = (int)(uVar5 + uVar6 + -1) / (int)uVar6;
            }
            uVar5 = *unaff_x20;
            FUN_10832ad60(uVar5,(long)(int)(iVar4 * uVar6),(long)(char)unaff_x19[0xb]);
          }
          puVar7 = (uint *)(long)(int)uVar5;
        }
        else {
          if ((char)unaff_x19[0xb] != '\x04') {
            func_0x00010832c7dc();
            func_0x00010832c6b8();
            func_0x00010832d098();
            puVar8 = &UNK_10f48ecc3;
            goto code_r0x000108329740;
          }
          puVar7 = param_1;
          func_0x00010832cf50();
        }
        uVar10 = (long)puVar7 * (long)(int)param_1;
      }
      else {
        uVar10 = 0;
      }
      goto code_r0x0001083296fc;
    default:
      func_0x00010832c7dc();
      func_0x00010832c6b8();
      func_0x00010832d098();
      puVar8 = &UNK_10f48ec89;
code_r0x000108329740:
      FUN_10841076c(puVar8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(auStack_68);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x108329750);
      (*pcVar3)();
    case '\b':
      func_0x00010832c7a4();
      uVar5 = (uint)param_1;
      if (uVar5 == 3) {
        uVar10 = (ulong)(*unaff_x20 - 7 < 0xfffffffc);
        goto code_r0x0001083296fc;
      }
      if ((((*unaff_x20 == 2) &&
           (func_0x00010832c7ec(*(undefined8 *)(*(long *)unaff_x19 + 0x110)), (int)uVar5 < 0x20)) &&
          (func_0x00010832c7a4(), uVar5 < 3)) ||
         ((((*unaff_x20 & 0xfffffffd) == 4 &&
           (func_0x00010832c7ec(*(undefined8 *)(*(long *)unaff_x19 + 0x110)), (int)uVar5 < 0x20)) &&
          (func_0x00010832c7a4(), uVar5 == 0)))) {
        uVar10 = 2;
        goto code_r0x0001083296fc;
      }
    case '\x01':
      uVar10 = 4;
      goto code_r0x0001083296fc;
    case '\t':
      func_0x00010832cc70();
      uVar10 = 0;
      for (param_2 = param_2 * 0x58; param_2 != 0; param_2 = param_2 + -0x58) {
        func_0x00010832ccd8();
        uVar2 = 0;
        if (param_1 != (uint *)0x0) {
          uVar2 = uVar10 / (ulong)param_1;
        }
        lVar9 = uVar10 - uVar2 * (long)param_1;
        lVar1 = 0;
        if (lVar9 != 0) {
          lVar1 = (long)param_1 - lVar9;
        }
        param_1 = unaff_x20;
        FUN_1083294fc();
        uVar10 = (long)param_1 + lVar1 + uVar10;
      }
      func_0x00010832cf50();
      uVar10 = (long)param_1 + (uVar10 - 1) & -(long)param_1;
code_r0x0001083296fc:
      return lVar12 * lVar11 * uVar10;
    case '\v':
      if ((*unaff_x20 != 2) || (func_0x00010832c594(), (int)param_1 != 3))
      goto code_r0x000108329560;
      func_0x00010832c440();
      lVar11 = lVar11 * lVar12 * 4;
      unaff_x19 = param_1;
    }
  } while( true );
code_r0x000108329560:
  func_0x00010832c594();
  iVar4 = (int)param_1;
  func_0x00010832c440();
  lVar12 = lVar12 * iVar4;
  unaff_x19 = param_1;
  goto code_r0x00010832952c;
}



/* Entry: 10832976c; end: 1083297d7;  */

void FUN_10832976c(long param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  long extraout_x8;
  long *plVar2;
  long unaff_x20;
  int iVar3;
  undefined8 **appuStack_58 [2];
  char cStack_41;
  char *pcStack_40;
  long lStack_38;
  
  func_0x00010832c7d0();
  FUN_108328d38();
  func_0x00010832c898();
  func_0x00010832c8e0();
  func_0x00010832c39c();
  func_0x00010832ca18();
  (**(code **)(extraout_x8 + 0x38))();
  func_0x00010832c2b8();
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x00010832c9f0();
    func_0x00010832c400();
    func_0x00010832c3a8();
  }
  pcVar1 = ";";
  func_0x00010832c634();
  if (param_3 != 0) {
    pcStack_40 = pcVar1;
    lStack_38 = param_3;
    if ((*(char *)(param_1 + 0x118) == '\x01') && (*(char *)(param_1 + 0x178) == '\x01')) {
      for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x114); iVar3 = iVar3 + 1) {
        (**(code **)(**(long **)(param_1 + 0x40) + 0x10))(*(long **)(param_1 + 0x40),&DAT_10f48d515)
        ;
      }
    }
    plVar2 = *(long **)(param_1 + 0x40);
    func_0x000107c27958(appuStack_58,&pcStack_40);
    if (-1 < cStack_41) {
      appuStack_58[0] = appuStack_58;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2,appuStack_58[0]);
    func_0x00010832c6dc();
    *(undefined1 *)(param_1 + 0x118) = 0;
  }
  return;
}



/* Entry: 1083297d8; end: 108329977;  */

void FUN_1083297d8(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  long lVar5;
  code *extraout_x8;
  undefined8 uVar6;
  code *extraout_x8_00;
  code *pcVar7;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long *unaff_x19;
  long unaff_x20;
  long *plVar8;
  long *plVar9;
  undefined8 uStack_68;
  
  func_0x00010832ca38();
  lVar5 = *(long *)(param_1 + 8);
  plVar8 = *(long **)(lVar5 + 0x38);
  plVar2 = *(long **)(lVar5 + 0x40);
  plVar9 = *(long **)(lVar5 + 0x50);
  plVar3 = *(long **)(lVar5 + 0x58);
  do {
    if (plVar8 == plVar2 && plVar9 == plVar3) {
      return;
    }
    plVar1 = plVar8;
    if (plVar9 != plVar3) {
      plVar1 = plVar9;
    }
    lVar5 = *plVar1;
    if (*(int *)(lVar5 + 0xc) == 3) {
      plVar1 = *(long **)(*(long *)(lVar5 + 0x10) + 0x10);
      cVar4 = *(char *)(*(long *)(*(long *)(lVar5 + 0x10) + 0x18) + 0x2c);
      if (cVar4 == '\n') {
        func_0x00010832c9e8(*(undefined8 *)(*plVar1 + 0x38));
        func_0x00010832c748();
        uVar6 = *(undefined8 *)(*unaff_x19 + 0x18);
      }
      else {
        if (cVar4 != '\x06') {
          if ((*(uint *)(plVar1 + 6) & 0xfffffffb) == 0) {
            func_0x00010832cfc4();
            func_0x00010832cae8();
            if (*(int *)(param_1 + 0x20) == -1) {
              if ((*(byte *)(plVar1 + 6) >> 2 & 1) == 0) {
                func_0x00010832c928(*(undefined8 *)(*unaff_x19 + 0x30));
                (*extraout_x8_01)();
              }
              else {
                func_0x00010832c98c(*(undefined8 *)(*unaff_x19 + 0x28));
                (*extraout_x8_02)();
              }
            }
          }
          goto LAB_1083298ec;
        }
        func_0x00010832c9e8(*(undefined8 *)(*plVar1 + 0x38));
        func_0x00010832c748();
        uVar6 = *(undefined8 *)(*unaff_x19 + 0x20);
      }
      func_0x00010832c98c(uVar6);
      pcVar7 = extraout_x8_00;
LAB_1083298e8:
      (*pcVar7)();
    }
    else if (*(int *)(lVar5 + 0xc) == 4) {
      param_1 = lVar5;
      FUN_108328d14();
      FUN_108329a74();
      if ((int)param_1 != 0) {
        uStack_68 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x20);
        param_1 = unaff_x20 + 0x58;
        FUN_108327a88(param_1,&uStack_68);
        func_0x00010832c5d8();
        func_0x00010832c928(*(undefined8 *)(*unaff_x19 + 0x10));
        pcVar7 = extraout_x8;
        goto LAB_1083298e8;
      }
    }
LAB_1083298ec:
    lVar5 = 8;
    if (plVar9 != plVar3) {
      lVar5 = 0;
    }
    plVar8 = (long *)((long)plVar8 + lVar5);
    lVar5 = 0;
    if (plVar9 != plVar3) {
      lVar5 = 8;
    }
    plVar9 = (long *)((long)plVar9 + lVar5);
  } while( true );
}



/* Entry: 108329978; end: 10832997b;  */

void FUN_108329978(void)

{
  return;
}



/* Entry: 10832997c; end: 108329a2b;  */

void FUN_10832997c(void)

{
  long *plVar1;
  long *unaff_x20;
  undefined1 auStack_48 [23];
  undefined1 uStack_31;
  
  func_0x00010832c7d0();
  FUN_108323b10();
  plVar1 = unaff_x20;
  (**(code **)(*unaff_x20 + 0x18))();
  __ZNSt3__19to_stringEi(auStack_48,*(undefined4 *)((long)plVar1 + 4));
  func_0x00010832c710(uStack_31);
  func_0x00010832c604();
  func_0x00010832c6dc();
  func_0x00010832c2d0();
  if (((*(uint *)(unaff_x20 + 6) & 1) != 0) || ((*(uint *)(unaff_x20 + 6) >> 1 & 1) != 0)) {
    func_0x00010832c604();
  }
  func_0x00010832c47c();
  return;
}



/* Entry: 108329a2c; end: 108329a6f;  */

uint FUN_108329a2c(ulong param_1)

{
  uint uVar1;
  long *unaff_x19;
  uint unaff_w20;
  
  func_0x00010832c7d0();
  func_0x00010832cf64();
  uVar1 = (uint)param_1;
  if ((param_1 & 1) == 0) {
    if ((unaff_w20 >> 5 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      func_0x00010832c7ec(*(undefined8 *)(*unaff_x19 + 0xe8));
      uVar1 = uVar1 ^ 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 108329a70; end: 108329a73;  */

void FUN_108329a70(void)

{
  return;
}



/* Entry: 108329a74; end: 108329a8b;  */

uint FUN_108329a74(uint param_1)

{
  FUN_10821b208();
  return param_1 ^ 1;
}



/* Entry: 108329a8c; end: 108329a93;  */

void FUN_108329a8c(void)

{
  return;
}



/* Entry: 108329a94; end: 108329b13;  */

void FUN_108329a94(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40);
  lVar3 = *(long *)(param_1 + 0x58);
  for (lVar6 = *(long *)(param_1 + 0x50); lVar5 != lVar2 || lVar6 != lVar3; lVar6 = lVar6 + lVar1) {
    bVar4 = lVar6 == lVar3;
    lVar1 = lVar5;
    if (!bVar4) {
      lVar1 = lVar6;
    }
    func_0x00010832ca44(lVar1);
    if ((bVar4) &&
       ((*(byte *)(*(long *)(*(long *)(extraout_x8 + 0x10) + 0x10) + 0x31) >> 5 & 1) != 0)) {
      (**(code **)(*param_2 + 0x10))(param_2);
    }
    lVar1 = 8;
    if (lVar6 != lVar3) {
      lVar1 = 0;
    }
    lVar5 = lVar5 + lVar1;
    lVar1 = 0;
    if (lVar6 != lVar3) {
      lVar1 = 8;
    }
  }
  return;
}



/* Entry: 108329b14; end: 108329b1f;  */

void FUN_108329b14(void)

{
  return;
}



/* Entry: 108329b20; end: 108329bef;  */

void FUN_108329b20(int *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  uint extraout_w8;
  uint extraout_w9;
  long lVar9;
  undefined8 *puVar10;
  long unaff_x21;
  ulong uVar11;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined1 auStack_38 [8];
  
  uStack_40 = (ulong)param_3;
  uVar3 = param_1[1];
  iVar4 = uVar3 * 3;
  iVar1 = *param_1 * 4;
  cVar5 = SBORROW4(iVar4,iVar1);
  cVar6 = iVar4 + *param_1 * -4 < 0;
  bVar7 = iVar4 == iVar1;
  uStack_48 = param_2;
  if (iVar4 <= iVar1) {
    func_0x00010832cda0();
    uVar2 = extraout_w8;
    if (bVar7 || cVar6 != cVar5) {
      uVar2 = extraout_w9;
    }
    uVar11 = (ulong)uVar2;
    func_0x00010832d018();
    puVar8 = (undefined8 *)(uVar11 * 0x18 + 0x10);
    __Znam();
    *puVar8 = 0x18;
    puVar8[1] = uVar11;
    if (uVar2 != 0) {
      lVar9 = uVar11 * 0x18;
      puVar10 = puVar8 + 2;
      do {
        *(undefined4 *)puVar10 = 0;
        lVar9 = lVar9 + -0x18;
        puVar10 = puVar10 + 3;
      } while (lVar9 != 0);
    }
    *(undefined8 **)(param_1 + 2) = puVar8 + 2;
    lVar9 = unaff_x21 + 8;
    for (uVar11 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)); uVar11 != 0;
        uVar11 = uVar11 - 1) {
      if (*(int *)(lVar9 + -8) != 0) {
        func_0x00010832c6e4();
        FUN_10832c1e8();
      }
      lVar9 = lVar9 + 0x18;
    }
    func_0x00010832b880(auStack_38);
  }
  FUN_10832c1e8(param_1,&uStack_48);
  return;
}



/* Entry: 108329bf0; end: 10832ab6f;  */

undefined8 * FUN_108329bf0(long *param_1)

{
  ulong *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined4 uVar7;
  byte bVar8;
  code *pcVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  bool bVar12;
  long lVar13;
  long *plVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined ***pppuVar17;
  char *pcVar18;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  long lVar19;
  long extraout_x8;
  long lVar20;
  long extraout_x8_00;
  long lVar21;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar22;
  long extraout_x8_05;
  undefined **extraout_x8_06;
  uint extraout_w9;
  long *extraout_x9;
  undefined8 *puVar23;
  ulong *puVar24;
  ulong *puVar25;
  int iVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  char *pcVar30;
  long *plVar31;
  ulong uVar32;
  undefined4 uVar33;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 auStack_130 [2];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  long *plStack_a8;
  undefined ***pppuStack_98;
  long alStack_90 [6];
  
  plVar14 = param_1;
  func_0x00010832d02c();
  func_0x00010832c69c();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar19 = plVar14[8];
  uVar7 = *(undefined4 *)((long)plVar14 + 0x114);
  plVar14[8] = (long)auStack_130;
  *(undefined4 *)((long)plVar14 + 0x114) = 0;
  FUN_108323bd4();
  func_0x00010832cf44();
  FUN_108323bd4(param_1,&UNK_10f48e996,0x10);
  FUN_108323bd4(param_1,&UNK_10f48e9a7,0x28);
  func_0x00010832c934();
  FUN_108323bd4();
  func_0x00010832cf44();
  ppuStack_f0 = &PTR_FUN_110a3c6f8;
  plStack_e8 = param_1;
  func_0x00010832c760();
  uStack_e0._0_5_ = (uint5)(uint)uStack_e0;
  ppuStack_f0 = &PTR_FUN_110a3c688;
  plStack_e8 = param_1;
  func_0x00010832c8b8();
  uVar33 = 0xbef33333;
  if (*(char *)(extraout_x8 + 6) == '\0') {
    uVar33 = 0;
  }
  uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar33);
  func_0x00010832c760();
  lVar20 = param_1[1];
  plVar14 = *(long **)(lVar20 + 0x38);
  plVar27 = *(long **)(lVar20 + 0x40);
  plVar3 = *(long **)(lVar20 + 0x58);
  for (plVar31 = *(long **)(lVar20 + 0x50); plVar14 != plVar27 || plVar31 != plVar3;
      plVar31 = (long *)((long)plVar31 + lVar20)) {
    plVar28 = plVar14;
    if (plVar31 != plVar3) {
      plVar28 = plVar31;
    }
    if (*(int *)(*plVar28 + 0xc) == 6) {
      plVar28 = *(long **)(*plVar28 + 0x10);
      FUN_10831d8f8(alStack_90,plVar28);
      func_0x00010832d0b0();
      func_0x0001004c3cd0(&UNK_10f48d203);
      func_0x00010832d0a4();
      func_0x00010048a6c8();
      func_0x00010832c4d0();
      func_0x00010832cf34();
      func_0x00010832c914();
      func_0x00010832c90c();
      func_0x00010832c85c();
      func_0x00010832c624();
      (**(code **)(*plVar28 + 0x90))(plVar28);
      func_0x00010832cca0();
      func_0x00010832c614();
      func_0x00010832c928();
      func_0x00010832c8f4();
    }
    lVar20 = 8;
    if (plVar31 != plVar3) {
      lVar20 = 0;
    }
    plVar14 = (long *)((long)plVar14 + lVar20);
    lVar20 = 0;
    if (plVar31 != plVar3) {
      lVar20 = 8;
    }
  }
  lVar20 = param_1[1];
  plVar14 = *(long **)(lVar20 + 0x38);
  plVar27 = *(long **)(lVar20 + 0x40);
  plVar3 = *(long **)(lVar20 + 0x58);
  for (plVar31 = *(long **)(lVar20 + 0x50); plVar14 != plVar27 || plVar31 != plVar3;
      plVar31 = (long *)((long)plVar31 + lVar20)) {
    plVar28 = plVar14;
    if (plVar31 != plVar3) {
      plVar28 = plVar31;
    }
    lVar20 = *plVar28;
    if ((*(int *)(lVar20 + 0xc) == 3) &&
       (plVar28 = *(long **)(*(long *)(lVar20 + 0x10) + 0x10),
       (*(byte *)(plVar28 + 6) >> 3 & 1) != 0)) {
      plVar29 = plVar28;
      (**(code **)(*plVar28 + 0x18))();
      iVar26 = *(int *)((long)plVar29 + 0x1c);
      if (iVar26 < 0) {
        func_0x00010832c8b8();
        iVar26 = *(int *)(extraout_x8_00 + 0x14);
      }
      if ((int)param_1[0x28] == -1) {
        func_0x00010832cee0(param_1,&UNK_10f48e9ee);
        *(int *)(param_1 + 0x28) = iVar26;
      }
      else if (iVar26 != (int)param_1[0x28]) {
        FUN_1083c8a60(param_1[4],*(undefined4 *)(lVar20 + 8),&UNK_10f48ea01,0x46);
      }
      func_0x00010832c498(param_1);
      func_0x00010832c898();
      func_0x00010832c3c4(param_1);
      (**(code **)(*plVar28 + 0x38))(plVar28);
      func_0x00010832c2b8();
      func_0x00010832c5bc();
    }
    lVar20 = 8;
    if (plVar31 != plVar3) {
      lVar20 = 0;
    }
    plVar14 = (long *)((long)plVar14 + lVar20);
    lVar20 = 0;
    if (plVar31 != plVar3) {
      lVar20 = 8;
    }
  }
  if ((int)param_1[0x28] != -1) {
    func_0x00010832c400();
  }
  func_0x00010832ca60();
  lVar21 = param_1[1];
  lVar20 = *(long *)(lVar21 + 0x38);
  lVar22 = *(long *)(lVar21 + 0x40);
  lVar4 = *(long *)(lVar21 + 0x58);
  for (lVar21 = *(long *)(lVar21 + 0x50); lVar20 != lVar22 || lVar21 != lVar4;
      lVar21 = lVar21 + lVar13) {
    uVar11 = lVar21 == lVar4;
    lVar13 = lVar20;
    if (!(bool)uVar11) {
      lVar13 = lVar21;
    }
    func_0x00010832ca44(lVar13);
    if ((bool)uVar11) {
      plVar31 = *(long **)(*(long *)(extraout_x8_01 + 0x10) + 0x10);
      plVar14 = plVar31;
      FUN_108327668();
      if ((int)plVar14 != 0) {
        func_0x00010832c6e4();
        func_0x00010832c680();
        func_0x00010832c504();
        if ((bool)uVar11) {
          lVar13 = plVar31[4];
          FUN_108329a2c(lVar13,(int)plVar31[6]);
          if ((int)lVar13 != 0) {
            func_0x00010832c950(param_1,&UNK_10f48e6dc);
          }
        }
        func_0x00010832c898();
        if ((*(byte *)(plVar31 + 6) >> 5 & 1) != 0) {
          plVar14 = (long *)plVar31[4];
          (**(code **)(*plVar14 + 0xe8))();
          if (((ulong)plVar14 & 1) == 0) {
            func_0x00010832c60c(param_1,&DAT_10f2e8297);
          }
        }
        func_0x00010832c928();
        func_0x00010832c60c();
        (**(code **)(*plVar31 + 0x38))(plVar31);
        func_0x00010832c2b8();
        plVar14 = plVar31;
        (**(code **)(*plVar31 + 0x18))();
        if (*(int *)((long)plVar14 + 4) != -1) {
          func_0x00010832c530();
          bVar12 = extraout_w8 == 6;
          if (extraout_w8 < 7) {
            func_0x00010832d004();
            if (bVar12) {
              if ((extraout_w8_00 & 0x52) != 0) {
                (**(code **)(*plVar31 + 0x18))();
                func_0x00010832cf20(*(undefined4 *)((long)plVar31 + 4));
                func_0x00010832d0b0();
                func_0x0001004c3cd0(&UNK_10f48ea83);
                func_0x00010832d0a4();
                func_0x00010048a6c8();
                func_0x00010832c4d0();
                func_0x00010832c604();
                func_0x00010832c914();
                func_0x00010832c90c();
                func_0x00010832c85c();
              }
            }
            else {
              FUN_10832997c(param_1,plVar31);
            }
          }
        }
        func_0x00010832c5bc();
      }
    }
    lVar13 = 8;
    if (lVar21 != lVar4) {
      lVar13 = 0;
    }
    lVar20 = lVar20 + lVar13;
    lVar13 = 0;
    if (lVar21 != lVar4) {
      lVar13 = 8;
    }
  }
  func_0x00010832c400();
  lVar20 = param_1[1];
  bVar8 = *(byte *)(*(long *)(lVar20 + 8) + 1);
  uVar10 = 1 < bVar8;
  uVar11 = bVar8 == 2;
  if ((bool)uVar11) goto LAB_10832a378;
  plVar14 = param_1;
  func_0x00010832cd28(param_1,&UNK_10f48ea92);
  func_0x00010832cfa4();
  lVar20 = extraout_x8_02;
  if (!(bool)uVar10 || (bool)uVar11) {
    func_0x00010832cff0();
    if ((bool)uVar11) {
      lVar20 = extraout_x8_03;
      if ((extraout_w9 & 0x52) != 0) {
LAB_10832a100:
        func_0x00010832c604();
        lVar20 = param_1[1];
      }
    }
    else {
      plVar14 = param_1;
      FUN_108323b10(param_1,&UNK_10f48eaca,0x25);
      lVar20 = param_1[1];
      if (*(char *)(lVar20 + 0x6a) == '\x01') goto LAB_10832a100;
    }
  }
  lVar21 = *(long *)(lVar20 + 0x38);
  lVar22 = *(long *)(lVar20 + 0x40);
  lVar4 = *(long *)(lVar20 + 0x58);
  for (lVar20 = *(long *)(lVar20 + 0x50); lVar21 != lVar22 || lVar20 != lVar4;
      lVar20 = lVar20 + lVar13) {
    bVar12 = lVar20 == lVar4;
    lVar13 = lVar21;
    if (!bVar12) {
      lVar13 = lVar20;
    }
    func_0x00010832ca44(lVar13);
    if (bVar12) {
      plVar31 = *(long **)(*(long *)(extraout_x8_04 + 0x10) + 0x10);
      func_0x00010832cfc4();
      func_0x00010832cae8();
      uVar11 = (int)plVar14[4] == 0x2724;
      if (!(bool)uVar11) {
        plVar14 = plVar31;
        func_0x0001083276e8();
        if ((int)plVar14 == 0) goto LAB_10832a31c;
        func_0x00010832c498(param_1);
        func_0x00010832c504();
        if ((bool)uVar11) {
          lVar13 = plVar31[4];
          FUN_108329a2c(lVar13,(int)plVar31[6]);
          if ((int)lVar13 != 0) {
            func_0x00010832c950(param_1,&UNK_10f48e6dc);
          }
        }
        func_0x00010832c898();
        func_0x00010832c504();
        if (((bool)uVar11) && ((*(byte *)(plVar31 + 6) >> 5 & 1) != 0)) {
          plVar14 = (long *)plVar31[4];
          (**(code **)(*plVar14 + 0xe8))();
          if (((ulong)plVar14 & 1) == 0) {
            func_0x00010832c60c(param_1,&DAT_10f2e8297);
          }
        }
        plVar14 = param_1;
        func_0x00010832c3c4();
        func_0x00010832c9e8(*(undefined8 *)(*plVar31 + 0x38));
        func_0x00010832c2b8();
        func_0x00010832cfc4();
        func_0x00010832cae8();
        plVar14 = (long *)(ulong)*(uint *)((long)plVar14 + 4);
        func_0x00010832c504();
        if ((((bool)uVar11) || (-1 < (int)plVar14)) || (*(char *)(plVar31[4] + 0x2c) == '\n')) {
          bVar12 = extraout_w8_01 == 6;
          if (extraout_w8_01 < 7) {
            func_0x00010832d004();
            if (bVar12) {
              if ((extraout_w8_02 & 0x52) != 0) {
                func_0x00010832c928();
                FUN_10832997c();
              }
            }
            else {
              func_0x00010832cf20();
              func_0x00010832d0b0();
              puVar15 = &UNK_10f48eb87;
              func_0x0001004c3cd0();
              func_0x00010832d0a4();
              func_0x00010832c6f8();
              func_0x00010048a6c8();
              func_0x00010832c4d0();
              func_0x00010832c604();
              func_0x00010832c914();
              func_0x00010832c90c();
              func_0x00010832c85c();
              func_0x00010832cfc4();
              func_0x00010832cae8();
              if (*(int *)(puVar15 + 0x18) != 0) {
                func_0x00010832cf20();
                func_0x00010832d0b0();
                func_0x0001004c3cd0(&UNK_10f48eb91);
                func_0x00010832d0a4();
                func_0x00010832c6f8();
                func_0x00010048a6c8();
                func_0x00010832c4d0();
                func_0x00010832c604();
                func_0x00010832c914();
                func_0x00010832c90c();
                func_0x00010832c85c();
              }
              plVar14 = param_1;
              func_0x00010832c670(param_1,&UNK_10f48dd48);
            }
          }
        }
        else {
          plVar14 = (long *)param_1[4];
          FUN_1083c8a60(plVar14,(int)plVar31[1],&UNK_10f48eb52,0x34);
        }
      }
      func_0x00010832c604();
    }
LAB_10832a31c:
    lVar13 = 8;
    if (lVar20 != lVar4) {
      lVar13 = 0;
    }
    lVar21 = lVar21 + lVar13;
    lVar13 = 0;
    if (lVar20 != lVar4) {
      lVar13 = 8;
    }
  }
  func_0x00010832c530();
  if (extraout_w8_03 < 7 && (1 << (ulong)(extraout_w8_03 & 0x1f) & 0x52U) != 0) {
    FUN_108323b10(param_1,&UNK_10f48eb9a,0x27);
  }
  func_0x00010832c400();
  lVar20 = param_1[1];
LAB_10832a378:
  bVar12 = false;
  puVar24 = *(ulong **)(lVar20 + 0x38);
  puVar5 = *(ulong **)(lVar20 + 0x40);
  puVar6 = *(ulong **)(lVar20 + 0x58);
  for (puVar25 = *(ulong **)(lVar20 + 0x50); puVar24 != puVar5 || puVar25 != puVar6;
      puVar25 = (ulong *)((long)puVar25 + lVar20)) {
    puVar1 = puVar24;
    if (puVar25 != puVar6) {
      puVar1 = puVar25;
    }
    uVar32 = *puVar1;
    if (*(int *)(uVar32 + 0xc) == 4) {
      uVar16 = uVar32;
      FUN_108328d14();
      func_0x000107c27944();
      if ((uVar16 & 1) == 0) {
        plVar14 = *(long **)(*(long *)(uVar32 + 0x10) + 0x20);
        (**(code **)(*plVar14 + 0x50))();
        FUN_108328d38(param_1,*(undefined4 *)(*(long *)(uVar32 + 0x10) + 0x30));
        func_0x00010832c950(param_1,&UNK_10f48d203);
        FUN_108324294(param_1,plVar14);
        func_0x00010832c8f4(param_1,&UNK_10f48d5df);
        func_0x00010832c624();
        (**(code **)(*plVar14 + 0x90))(plVar14);
        func_0x00010832cca0();
        if (*(char *)(param_1[1] + 0x68) != '\0') {
          FUN_108323bd4(param_1,&UNK_10f48e852,0x12);
        }
        func_0x00010832c614();
        func_0x00010832cdec(param_1);
        func_0x00010832c60c();
        if (*(long *)(*(long *)(uVar32 + 0x10) + 0x18) == 0) {
          *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
          __ZNSt3__19to_stringEi(&ppuStack_170);
          func_0x0001004c3cd0(&ppuStack_f0,&UNK_10f48e865,&ppuStack_170);
          func_0x00010832cd10();
          func_0x00010832c914();
          pppuVar17 = &ppuStack_170;
        }
        else {
          func_0x00010832c3c4(param_1);
          func_0x00010832c604();
          uVar16 = uVar32;
          FUN_10832929c();
          if (0 < (int)uVar16) {
            func_0x00010832c60c(param_1,&DAT_10f62a9e8);
            FUN_10832929c(uVar32);
            __ZNSt3__19to_stringEi(&ppuStack_f0);
            func_0x00010832c4d0();
            func_0x00010832c604();
            func_0x00010832c914();
            func_0x00010832c60c(param_1,&DAT_10f62a9ea);
          }
          uStack_168 = *(undefined8 *)(*(long *)(uVar32 + 0x10) + 0x18);
          ppuStack_170 = *(undefined ***)(*(long *)(uVar32 + 0x10) + 0x10);
          func_0x000107c27958(&ppuStack_f0,&ppuStack_170);
          func_0x00010832cd10();
          pppuVar17 = &ppuStack_f0;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppuVar17);
        func_0x00010832c948(param_1,";");
      }
      bVar12 = true;
    }
    lVar20 = 8;
    if (puVar25 != puVar6) {
      lVar20 = 0;
    }
    puVar24 = (ulong *)((long)puVar24 + lVar20);
    lVar20 = 0;
    if (puVar25 != puVar6) {
      lVar20 = 8;
    }
  }
  if ((!bVar12) && (*(char *)(param_1[1] + 0x68) != '\0')) {
    FUN_108323bd4(param_1,&UNK_10f48ebc2,0x34);
  }
  uStack_e0 = CONCAT71(uStack_e0._1_7_,1);
  ppuStack_f0 = &PTR_FUN_110a3c758;
  plStack_e8 = param_1;
  func_0x00010832c760();
  if ((uStack_e0 & 1) == 0) {
    func_0x00010832c564(plStack_e8);
  }
  uStack_e0 = CONCAT71(uStack_e0._1_7_,1);
  ppuStack_f0 = &PTR_FUN_110a3c818;
  plVar14 = (long *)param_1[1];
  plStack_e8 = param_1;
  FUN_108329a94(plVar14,&ppuStack_f0);
  if ((uStack_e0 & 1) == 0) {
    plVar14 = plStack_e8;
    func_0x00010832c564();
  }
  plVar27 = *(long **)(param_1[1] + 0x58);
  for (plVar31 = *(long **)(param_1[1] + 0x50); plVar31 != plVar27; plVar31 = plVar31 + 1) {
    if (*(int *)(*plVar31 + 0xc) == 1) {
      func_0x00010832cf3c();
      func_0x00010832c6e4();
      func_0x00010832c948();
    }
  }
  func_0x00010832c69c();
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  param_1[8] = (long)&ppuStack_170;
  *(undefined4 *)((long)param_1 + 0x114) = 0;
  lVar20 = param_1[1];
  plVar31 = *(long **)(lVar20 + 0x38);
  plVar3 = *(long **)(lVar20 + 0x40);
  plVar27 = *(long **)(lVar20 + 0x50);
  plVar28 = *(long **)(lVar20 + 0x58);
  do {
    if (plVar31 == plVar3 && plVar27 == plVar28) {
      param_1[8] = lVar19;
      *(undefined4 *)((long)param_1 + 0x114) = uVar7;
      FUN_1083d4250(auStack_130);
      FUN_1083d4250(param_1 + 0x1a,param_1[8]);
      FUN_1083d4250(param_1 + 0x12,param_1[8]);
      FUN_1083d4250(&ppuStack_170,param_1[8]);
      uVar11 = *(int *)(param_1[4] + 0x18) == 0;
      puVar23 = (undefined8 *)(ulong)(byte)uVar11;
      FUN_10831e0a4(&ppuStack_170);
      FUN_10831e0a4();
      func_0x00010832c2a0();
      if (!(bool)uVar11) {
        ___stack_chk_fail();
        func_0x00010832c90c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_90);
        func_0x00010832d064();
        puVar23 = auStack_130;
        FUN_10831e0a4();
        func_0x00010832cce8();
        *puVar23 = &PTR_FUN_110a3c638;
        FUN_10832b8d4(puVar23 + 0x2e);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar23 + 0x29);
        func_0x00010832b7e4(puVar23 + 0x27);
        func_0x00010832b880(puVar23 + 0x25);
        FUN_10831e0a4(puVar23 + 0x1a);
        FUN_10831e0a4(puVar23 + 0x12);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar23 + 0xf);
        func_0x00010831e250(puVar23 + 0xc);
        FUN_10832b730(puVar23 + 10);
        *puVar23 = &PTR_DAT_110a3c978;
        return puVar23;
      }
      return puVar23;
    }
    plVar29 = plVar31;
    if (plVar27 != plVar28) {
      plVar29 = plVar27;
    }
    lVar20 = *plVar29;
    if (*(int *)(lVar20 + 0xc) == 2) {
      func_0x00010832cf3c();
      plVar14 = param_1;
      func_0x00010832c948(param_1,";");
    }
    else if ((*(int *)(lVar20 + 0xc) == 1) && (func_0x00010832cf3c(), (int)plVar14 != 0)) {
      param_1[0x2c] = *(long *)(lVar20 + 0x10);
      ppuStack_b0 = &PTR_DAT_110a3caa0;
      pppuStack_98 = &ppuStack_b0;
      plStack_a8 = param_1;
      func_0x000105302f48(alStack_90,&ppuStack_b0);
      func_0x0001006393ec(&ppuStack_b0);
      func_0x00010832c8f4(param_1,&UNK_10f48d5df);
      if (*(char *)(*(long *)(lVar20 + 0x10) + 0x56) == '\x01') {
        func_0x00010832c624();
        uStack_e0 = CONCAT71(uStack_e0._1_7_,1);
        ppuStack_f0 = &PTR_DAT_110a3c7b8;
        plStack_e8 = param_1;
        func_0x00010832c760();
        if ((uStack_e0 & 1) == 0) {
          func_0x00010832c564(plStack_e8);
          FUN_108323bd4(plStack_e8,&UNK_10f48ef63,0xf);
        }
        if (*(char *)(*(long *)(param_1[1] + 8) + 1) == '\x02') {
          uStack_e0 = CONCAT71(uStack_e0._1_7_,1);
          ppuStack_f0 = &PTR_DAT_110a3c868;
          plStack_e8 = param_1;
          FUN_108329a94(param_1[1],&ppuStack_f0);
          if ((uStack_e0 & 1) == 0) {
            func_0x00010832c564(plStack_e8);
            FUN_108323bd4(plStack_e8,&UNK_10f48efb2,0x14);
          }
          func_0x00010832cecc(param_1,&UNK_10f48e81c);
          lVar22 = param_1[1];
          lVar21 = *(long *)(lVar22 + 0x38);
          lVar4 = *(long *)(lVar22 + 0x40);
          lVar13 = *(long *)(lVar22 + 0x58);
          pcVar30 = "";
          for (lVar22 = *(long *)(lVar22 + 0x50); lVar21 != lVar4 || lVar22 != lVar13;
              lVar22 = lVar22 + lVar2) {
            bVar12 = lVar22 == lVar13;
            lVar2 = lVar21;
            if (!bVar12) {
              lVar2 = lVar22;
            }
            func_0x00010832ca44(lVar2);
            if (bVar12) {
              plVar29 = *(long **)(*(long *)(extraout_x8_05 + 0x10) + 0x10);
              plVar14 = plVar29;
              FUN_108327668();
              if ((int)plVar14 != 0) {
                pcVar18 = pcVar30;
                _strlen(pcVar30);
                FUN_108323b10(param_1,pcVar30,pcVar18);
                (**(code **)(*plVar29 + 0x38))(plVar29);
                func_0x00010832c2b8();
                pcVar30 = ", ";
              }
            }
            lVar2 = 8;
            if (lVar22 != lVar13) {
              lVar2 = 0;
            }
            lVar21 = lVar21 + lVar2;
            lVar2 = 0;
            if (lVar22 != lVar13) {
              lVar2 = 8;
            }
          }
        }
        else {
          FUN_108323bd4(param_1,&UNK_10f48e830,0xd);
        }
        func_0x00010832cf34();
        func_0x00010832c614();
      }
      func_0x000107c27fa8(param_1 + 0xf);
      func_0x00010832c69c();
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      lVar22 = param_1[8];
      param_1[8] = (long)&ppuStack_f0;
      ppuStack_f0 = extraout_x8_06;
      plStack_e8 = extraout_x9;
      func_0x00010832c624();
      puVar24 = *(ulong **)(*(long *)(lVar20 + 0x18) + 0x28);
      for (lVar21 = (long)*(int *)(*(long *)(lVar20 + 0x18) + 0x30) << 3; lVar21 != 0;
          lVar21 = lVar21 + -8) {
        plVar14 = (long *)*puVar24;
        (**(code **)(*plVar14 + 0x18))();
        if (((ulong)plVar14 & 1) == 0) {
          func_0x00010832ca84();
          func_0x00010832ccc0();
        }
        puVar24 = puVar24 + 1;
      }
      if ((*(byte *)(*(long *)(lVar20 + 0x10) + 0x56) & 1) != 0) {
        lVar21 = *(long *)(lVar20 + 0x18);
        if (*(int *)(*(long *)(lVar20 + 0x18) + 0xc) == 0xc) {
          do {
            uVar32 = (ulong)*(uint *)(lVar21 + 0x30);
            do {
              if (uVar32 == 0) goto LAB_10832a974;
              if ((int)uVar32 < 1) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x10832aa7c);
                (*pcVar9)();
              }
              lVar20 = *(long *)(*(long *)(lVar21 + 0x28) + uVar32 * 8 + -8);
              iVar26 = *(int *)(lVar20 + 0xc);
              uVar32 = uVar32 - 1;
            } while (iVar26 == 0x14);
            lVar21 = lVar20;
          } while (iVar26 == 0xc);
          if (iVar26 == 0x15) goto LAB_10832a980;
        }
LAB_10832a974:
        FUN_10832925c(param_1);
        func_0x00010832ccc0();
      }
LAB_10832a980:
      func_0x00010832c614();
      func_0x00010832cdec(param_1);
      func_0x00010832c948();
      param_1[8] = lVar22;
      func_0x00010832c604();
      FUN_10831c910(&ppuStack_f0);
      func_0x00010832c5d8();
      func_0x00010832c604();
      FUN_10831e0a4(&ppuStack_f0);
      plVar14 = alStack_90;
      FUN_108300130();
    }
    lVar20 = 8;
    if (plVar27 != plVar28) {
      lVar20 = 0;
    }
    plVar31 = (long *)((long)plVar31 + lVar20);
    lVar20 = 0;
    if (plVar27 != plVar28) {
      lVar20 = 8;
    }
    plVar27 = (long *)((long)plVar27 + lVar20);
  } while( true );
}



/* Entry: 10832ab70; end: 10832ab73;  */

undefined8 * FUN_10832ab70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3c638;
  FUN_10832b8d4(param_1 + 0x2e);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x29);
  func_0x00010832b7e4(param_1 + 0x27);
  func_0x00010832b880(param_1 + 0x25);
  FUN_10831e0a4(param_1 + 0x1a);
  FUN_10831e0a4(param_1 + 0x12);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xf);
  func_0x00010831e250(param_1 + 0xc);
  FUN_10832b730(param_1 + 10);
  *param_1 = &PTR_DAT_110a3c978;
  return param_1;
}



/* Entry: 10832ab74; end: 10832ad4b;  */

undefined *** FUN_10832ab74(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined **ppuStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined2 uStack_c0;
  undefined8 uStack_be;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined6 uStack_60;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  
  puStack_190 = (undefined1 *)&ppuStack_210;
  pppuVar2 = &ppuStack_210;
  ppuStack_210 = &PTR_FUN_110a3c120;
  ppuStack_208 = &PTR_FUN_110a403f8;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  puVar3 = (undefined8 *)param_1[2];
  lStack_1b0 = puVar3[2];
  puVar4 = (undefined8 *)*param_1;
  lVar6 = (long)*(char *)((long)puVar4 + 0x17);
  puVar5 = puVar4;
  if (lVar6 < 0) {
    puVar5 = (undefined8 *)*puVar4;
    lVar6 = puVar4[1];
  }
  *(undefined8 **)(lStack_1b0 + 8) = puVar5;
  *(long *)(lStack_1b0 + 0x10) = lVar6;
  uStack_1c0 = *puVar3;
  uStack_1b8 = param_1[1];
  uStack_1a8 = puVar3[3];
  uStack_1a0 = param_1[5];
  ppuStack_1d0 = &PTR_FUN_110a3c638;
  uStack_188 = 0;
  uStack_180 = 0;
  puStack_1c8 = param_1;
  uStack_198 = param_2;
  FUN_10832b43c(&uStack_188,0x10);
  puVar5 = (undefined8 *)&UNK_110a3c900;
  lVar6 = 0x70;
  do {
    FUN_10832b540(&uStack_188,puVar5[-1],*puVar5);
    puVar5 = puVar5 + 2;
    lVar6 = lVar6 + -0x10;
  } while (lVar6 != 0);
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  puStack_160 = &DAT_10f68f57e;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  ppuStack_140 = &PTR_FUN_110a3c120;
  ppuStack_138 = &PTR_FUN_110a403f8;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  ppuStack_100 = &PTR_FUN_110a3c120;
  ppuStack_f8 = &PTR_FUN_110a403f8;
  uStack_be = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_c6 = 0;
  uStack_d0 = 0;
  uStack_90 = 0xffffffff;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_5a = 0;
  pppuVar1 = &ppuStack_1d0;
  FUN_108329bf0();
  lVar6 = *(long *)(param_1[2] + 0x10);
  *(undefined8 *)(lVar6 + 8) = 0;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  FUN_10832b768(&ppuStack_1d0);
  if (((ulong)pppuVar1 & 1) != 0) {
    FUN_10831c910(&ppuStack_210);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_3,pppuVar2);
  }
  FUN_10831e0a4(&ppuStack_210);
  return pppuVar1;
}



/* Entry: 10832ad4c; end: 10832ad5f;  */

void FUN_10832ad4c(void)

{
  FUN_10832b768();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10832ad60; end: 10832ad8f;  */

ulong FUN_10832ad60(int param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  
  uVar1 = param_2 + 0xf & 0xfffffffffffffff0;
  if (param_1 - 3U < 2 && param_3 != 4) {
    param_2 = uVar1;
  }
  if (param_1 == 0) {
    param_2 = uVar1;
  }
  return param_2;
}



/* Entry: 10832ad90; end: 10832ae0f;  */

void FUN_10832ad90(long param_1)

{
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x14) = 1;
    FUN_1083d4028(auStack_38,&UNK_10f48ecfb);
    func_0x00010832cce0();
    func_0x00010832c64c();
    func_0x00010832cb50();
  }
  return;
}



/* Entry: 10832ae10; end: 10832ae1f;  */

void FUN_10832ae10(void)

{
  return;
}



/* Entry: 10832ae20; end: 10832ae5b;  */

void FUN_10832ae20(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  func_0x00010832ca38();
  func_0x00010832cf70(*(undefined8 *)(param_1 + 8),&UNK_10f48e6e4);
  FUN_10832976c(*(undefined8 *)(unaff_x20 + 8));
  lVar1 = *(long *)(unaff_x20 + 8);
  if ((*(byte *)(lVar1 + 0x118) & 1) != 0) {
    return;
  }
  FUN_108323b10(lVar1,0,0);
  (**(code **)(**(long **)(lVar1 + 0x40) + 0x10))
            (*(long **)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x70));
  *(undefined1 *)(lVar1 + 0x118) = 1;
  return;
}



/* Entry: 10832ae5c; end: 10832ae5f;  */

void FUN_10832ae5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10832ae60; end: 10832af23;  */

void FUN_10832ae60(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 **appuStack_58 [2];
  char cStack_41;
  
  FUN_10832b040();
  func_0x00010832c498(*(undefined8 *)(param_1 + 8));
  uVar2 = *(uint *)(*(long *)(param_2 + 0x10) + 0x30);
  if ((uVar2 >> 9 & 1) != 0) {
    func_0x00010832c84c(*(undefined8 *)(param_1 + 8),&UNK_10f48d217);
    uVar2 = *(uint *)(*(long *)(param_2 + 0x10) + 0x30);
  }
  bVar3 = (uVar2 & 0x800) != 0;
  uVar5 = 9;
  if (bVar3) {
    uVar5 = 7;
  }
  puVar1 = &UNK_10f48e6e4;
  if (bVar3) {
    puVar1 = &UNK_10f48e6dc;
  }
  FUN_108323b10(*(undefined8 *)(param_1 + 8),puVar1,uVar5);
  uVar8 = *(undefined8 *)(param_1 + 8);
  FUN_108328d14(param_2);
  func_0x00010832c748();
  FUN_108323b10(uVar8,uVar5);
  func_0x00010832c670(*(undefined8 *)(param_1 + 8));
  func_0x00010832c78c();
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010832c8a8();
  if (param_4 != 0) {
    if ((*(char *)(lVar4 + 0x118) == '\x01') && (*(char *)(lVar4 + 0x178) == '\x01')) {
      for (iVar7 = 0; iVar7 < *(int *)(lVar4 + 0x114); iVar7 = iVar7 + 1) {
        (**(code **)(**(long **)(lVar4 + 0x40) + 0x10))(*(long **)(lVar4 + 0x40),&DAT_10f48d515);
      }
    }
    plVar6 = *(long **)(lVar4 + 0x40);
    func_0x000107c27958(appuStack_58,&stack0xffffffffffffffc0);
    if (-1 < cStack_41) {
      appuStack_58[0] = appuStack_58;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6,appuStack_58[0]);
    func_0x00010832c6dc();
    *(undefined1 *)(lVar4 + 0x118) = 0;
  }
  return;
}



/* Entry: 10832af24; end: 10832afcb;  */

void FUN_10832af24(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  undefined8 **appuStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  long lStack_38;
  
  FUN_10832b040();
  func_0x00010832c498(*(undefined8 *)(param_1 + 8));
  FUN_108324294(*(undefined8 *)(param_1 + 8),param_2);
  func_0x00010832c3c4(*(undefined8 *)(param_1 + 8));
  FUN_108327740(*(undefined8 *)(param_1 + 8));
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010832c8a8();
  if (param_4 != 0) {
    uStack_40 = param_3;
    lStack_38 = param_4;
    if ((*(char *)(lVar1 + 0x118) == '\x01') && (*(char *)(lVar1 + 0x178) == '\x01')) {
      for (iVar3 = 0; iVar3 < *(int *)(lVar1 + 0x114); iVar3 = iVar3 + 1) {
        (**(code **)(**(long **)(lVar1 + 0x40) + 0x10))(*(long **)(lVar1 + 0x40),&DAT_10f48d515);
      }
    }
    plVar2 = *(long **)(lVar1 + 0x40);
    func_0x000107c27958(appuStack_58,&uStack_40);
    if (-1 < cStack_41) {
      appuStack_58[0] = appuStack_58;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2,appuStack_58[0]);
    func_0x00010832c6dc();
    *(undefined1 *)(lVar1 + 0x118) = 0;
  }
  return;
}



/* Entry: 10832afcc; end: 10832afcf;  */

void FUN_10832afcc(void)

{
  return;
}



/* Entry: 10832afd0; end: 10832b03f;  */

void FUN_10832afd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long *plVar3;
  long unaff_x20;
  int iVar4;
  undefined8 uVar5;
  undefined8 **appuStack_58 [2];
  char cStack_41;
  long lStack_40;
  long lStack_38;
  
  func_0x00010832ca38();
  FUN_10832b040();
  func_0x00010832c498(*(undefined8 *)(unaff_x20 + 8));
  FUN_108328d38(*(undefined8 *)(unaff_x20 + 8),(int)unaff_x19[6]);
  lVar2 = unaff_x19[4];
  FUN_108324294(*(undefined8 *)(unaff_x20 + 8));
  func_0x00010832c3c4(*(undefined8 *)(unaff_x20 + 8));
  uVar5 = *(undefined8 *)(unaff_x20 + 8);
  (**(code **)(*unaff_x19 + 0x38))();
  func_0x00010832c748();
  func_0x00010832c4a8(uVar5);
  lVar1 = *(long *)(unaff_x20 + 8);
  func_0x00010832c8a8();
  if (param_3 != 0) {
    lStack_40 = lVar2;
    lStack_38 = param_3;
    if ((*(char *)(lVar1 + 0x118) == '\x01') && (*(char *)(lVar1 + 0x178) == '\x01')) {
      for (iVar4 = 0; iVar4 < *(int *)(lVar1 + 0x114); iVar4 = iVar4 + 1) {
        (**(code **)(**(long **)(lVar1 + 0x40) + 0x10))(*(long **)(lVar1 + 0x40),&DAT_10f48d515);
      }
    }
    plVar3 = *(long **)(lVar1 + 0x40);
    func_0x000107c27958(appuStack_58,&lStack_40);
    if (-1 < cStack_41) {
      appuStack_58[0] = appuStack_58;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,appuStack_58[0]);
    func_0x00010832c6dc();
    *(undefined1 *)(lVar1 + 0x118) = 0;
  }
  return;
}



/* Entry: 10832b040; end: 10832b07b;  */

void FUN_10832b040(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x00010832cd28(*(undefined8 *)(param_1 + 8),&UNK_10f48ef30);
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 10832b07c; end: 10832b07f;  */

void FUN_10832b07c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10832b080; end: 10832b147;  */

void FUN_10832b080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  long unaff_x21;
  uint uVar8;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x00010832cc24();
  lVar4 = *(long *)(unaff_x21 + 8);
  puVar3 = &DAT_10f2e8297;
  func_0x00010832c60c();
  func_0x00010832cd70();
  uVar2 = (uint)&puStack_50;
  puStack_50 = puVar3;
  uStack_48 = param_3;
  FUN_10832b6d4();
  iVar7 = 0;
  iVar5 = *(int *)(lVar4 + 0x4c);
  uVar8 = iVar5 - 1U & uVar2;
  do {
    if (iVar5 <= iVar7) {
LAB_1083277d8:
      func_0x00010832c604();
      return;
    }
    puVar6 = (uint *)(*(long *)(lVar4 + 0x50) + (long)(int)uVar8 * 0x18);
    if (*puVar6 == 0) goto LAB_1083277d8;
    if (uVar2 == *puVar6) {
      puVar3 = puStack_50;
      FUN_10821b208(puStack_50,uStack_48,*(undefined8 *)(puVar6 + 2),*(undefined8 *)(puVar6 + 4));
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00010832c39c();
        goto LAB_1083277d8;
      }
      iVar5 = *(int *)(lVar4 + 0x4c);
    }
    iVar1 = 0;
    if ((int)uVar8 < 1) {
      iVar1 = iVar5;
    }
    uVar8 = (uVar8 + iVar1) - 1;
    iVar7 = iVar7 + 1;
  } while( true );
}



/* Entry: 10832b148; end: 10832b14b;  */

void FUN_10832b148(void)

{
  return;
}



/* Entry: 10832b14c; end: 10832b1cf;  */

void FUN_10832b14c(long param_1,undefined8 param_2,long *param_3,undefined *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  char *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  long extraout_x8;
  undefined8 *unaff_x19;
  long *plVar10;
  undefined8 unaff_x20;
  int iVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  char cStack_2e1;
  code *pcStack_2a8;
  undefined1 auStack_2a0 [104];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [32];
  undefined8 auStack_200 [52];
  
  func_0x00010832b194();
  puVar7 = *(undefined8 **)(param_1 + 8);
  if (param_3 == (long *)0x0) {
    param_4 = &DAT_10f2fb62f;
    puVar9 = (undefined *)0x2;
    puVar5 = puVar7;
    pcStack_2a8 = unaff_x30;
  }
  else {
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010832d02c(puVar7,param_3,0x11);
    uVar2 = *(int *)((long)param_3 + 0xc) - 0x19;
    bVar4 = uVar2 == 0x19;
    if (uVar2 < 0x1a) {
      func_0x00010832c7d0();
                    /* WARNING: Could not recover jumptable at 0x00010832433c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(ushort *)(&UNK_10df1a5f0 + extraout_x8 * 2) * 4 + 0x108324340))();
      return;
    }
    func_0x00010832c2a0();
    if (bVar4) {
      func_0x00010832cf78(unaff_x30);
      return;
    }
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_220);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_238);
    puVar5 = auStack_200;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010832c694();
    pcStack_2a8 = FUN_1083258f4;
    lVar8 = param_3[2];
    FUN_108324294();
    func_0x00010832cb90();
    puVar6 = puVar5;
    func_0x00010832cb58();
    func_0x00010832c9e8(*(undefined8 *)(*param_3 + 0x48));
    pcVar3 = "";
    for (lVar8 = lVar8 << 3; lVar8 != 0; lVar8 = lVar8 + -8) {
      _strlen(pcVar3);
      func_0x00010832c3b4();
      FUN_1083242ec(puVar5,*puVar6,0x11);
      pcVar3 = ", ";
      puVar6 = puVar6 + 1;
    }
    puVar9 = param_4;
    _strlen();
    register0x00000008 = (BADSPACEBASE *)auStack_2a0;
    unaff_x19 = puVar7;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = pcStack_2a8;
  *(undefined **)((long)register0x00000008 + -0x40) = param_4;
  *(undefined **)((long)register0x00000008 + -0x38) = puVar9;
  if (puVar9 != (undefined *)0x0) {
    if ((*(char *)(puVar5 + 0x23) == '\x01') && (*(char *)(puVar5 + 0x2f) == '\x01')) {
      for (iVar11 = 0; iVar11 < *(int *)((long)puVar5 + 0x114); iVar11 = iVar11 + 1) {
        (**(code **)(*(long *)puVar5[8] + 0x10))((long *)puVar5[8],&DAT_10f48d515);
      }
    }
    plVar10 = (long *)puVar5[8];
    func_0x000107c27958((undefined1 *)((long)register0x00000008 + -0x58),
                        (undefined1 *)((long)register0x00000008 + -0x40));
    puVar1 = *(undefined1 **)((long)register0x00000008 + -0x58);
    if (-1 < *(char *)((long)register0x00000008 + -0x41)) {
      puVar1 = (undefined1 *)((long)register0x00000008 + -0x58);
    }
    (**(code **)(*plVar10 + 0x10))(plVar10,puVar1);
    func_0x00010832c6dc();
    *(undefined1 *)(puVar5 + 0x23) = 0;
  }
  return;
}



/* Entry: 10832b1d0; end: 10832b1d3;  */

void FUN_10832b1d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10832b1d4; end: 10832b25f;  */

void FUN_10832b1d4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long *plVar3;
  long *unaff_x20;
  int iVar4;
  undefined8 uVar5;
  undefined8 **appuStack_58 [2];
  char cStack_41;
  long lStack_40;
  long lStack_38;
  
  func_0x00010832c7d0();
  if (*(char *)(param_1 + 0x10) == '\x01') {
    param_3 = 0x16;
    FUN_108323b10(*(undefined8 *)(unaff_x19 + 8),&UNK_10f48ef73);
    *(undefined1 *)(unaff_x19 + 0x10) = 0;
  }
  func_0x00010832c498(*(undefined8 *)(unaff_x19 + 8));
  FUN_108328d38(*(undefined8 *)(unaff_x19 + 8),(int)unaff_x20[6]);
  lVar2 = unaff_x20[4];
  FUN_108324294(*(undefined8 *)(unaff_x19 + 8));
  func_0x00010832c3c4(*(undefined8 *)(unaff_x19 + 8));
  uVar5 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010832ca98(*(undefined8 *)(*unaff_x20 + 0x38));
  func_0x00010832c748();
  func_0x00010832c4a8(uVar5);
  lVar1 = *(long *)(unaff_x19 + 8);
  func_0x00010832c8a8();
  if (param_3 != 0) {
    lStack_40 = lVar2;
    lStack_38 = param_3;
    if ((*(char *)(lVar1 + 0x118) == '\x01') && (*(char *)(lVar1 + 0x178) == '\x01')) {
      for (iVar4 = 0; iVar4 < *(int *)(lVar1 + 0x114); iVar4 = iVar4 + 1) {
        (**(code **)(**(long **)(lVar1 + 0x40) + 0x10))(*(long **)(lVar1 + 0x40),&DAT_10f48d515);
      }
    }
    plVar3 = *(long **)(lVar1 + 0x40);
    func_0x000107c27958(appuStack_58,&lStack_40);
    if (-1 < cStack_41) {
      appuStack_58[0] = appuStack_58;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,appuStack_58[0]);
    func_0x00010832c6dc();
    *(undefined1 *)(lVar1 + 0x118) = 0;
  }
  return;
}



/* Entry: 10832b260; end: 10832b263;  */

void FUN_10832b260(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10832b264; end: 10832b2af;  */

void FUN_10832b264(void)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  long *plVar2;
  int iVar3;
  undefined8 **appuStack_58 [2];
  char cStack_41;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010832d084();
  if ((bool)in_ZR) {
    FUN_108323b10();
    *(undefined1 *)(unaff_x19 + 0x10) = 0;
  }
  else {
    func_0x00010832ca54();
    func_0x00010832c670();
  }
  lVar1 = *(long *)(unaff_x19 + 8);
  puStack_40 = &DAT_10f2fb62f;
  uStack_38 = 2;
  if ((*(char *)(lVar1 + 0x118) == '\x01') && (*(char *)(lVar1 + 0x178) == '\x01')) {
    for (iVar3 = 0; iVar3 < *(int *)(lVar1 + 0x114); iVar3 = iVar3 + 1) {
      (**(code **)(**(long **)(lVar1 + 0x40) + 0x10))(*(long **)(lVar1 + 0x40),&DAT_10f48d515);
    }
  }
  plVar2 = *(long **)(lVar1 + 0x40);
  func_0x000107c27958(appuStack_58,&puStack_40);
  if (-1 < cStack_41) {
    appuStack_58[0] = appuStack_58;
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,appuStack_58[0]);
  func_0x00010832c6dc();
  *(undefined1 *)(lVar1 + 0x118) = 0;
  return;
}



/* Entry: 10832b2b0; end: 10832b2b3;  */

void FUN_10832b2b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10832b2b4; end: 10832b41b;  */

ulong FUN_10832b2b4(ulong param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  ulong uVar5;
  
  func_0x00010832c7d0();
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 == 0x25) {
    if (*(char *)(unaff_x20 + 0x1c) == '\x01') {
      *(uint *)(unaff_x19 + 0x10) = *(uint *)(unaff_x19 + 0x10) | 8;
      return 0;
    }
    goto LAB_10832b3a8;
  }
  if (iVar1 == 0x32) {
    uVar5 = *(ulong *)(unaff_x20 + 0x18);
    func_0x00010832c4f4();
    if (*(int *)(param_1 + 0x20) == 0xf) {
      param_1 = 0x18;
    }
    else {
      func_0x00010832c4f4();
      if (*(int *)(param_1 + 0x20) == 0x14) {
        param_1 = 0x20;
      }
      else {
        func_0x00010832c4f4();
        if (*(int *)(param_1 + 0x20) == 0x2724) {
LAB_10832b368:
          param_1 = 2;
        }
        else {
          func_0x00010832c4f4();
          if (*(int *)(param_1 + 0x20) == 0x2a) {
            param_1 = 0x40;
          }
          else {
            func_0x00010832c4f4();
            if (*(int *)(param_1 + 0x20) == 0x2b) {
              param_1 = 0x80;
            }
            else {
              if (*(char *)(uVar5 + 0x38) != '\0') goto LAB_10832b3a8;
              uVar4 = uVar5;
              FUN_108327668();
              if ((uVar4 & 1) == 0) {
                param_1 = uVar5;
                func_0x0001083276e8();
                if ((param_1 & 1) != 0) goto LAB_10832b368;
                uVar2 = *(uint *)(uVar5 + 0x30);
                if (((uVar2 >> 3 & 1) == 0) || (*(char *)(*(long *)(uVar5 + 0x20) + 0x2c) == '\x06')
                   ) {
                  if ((uVar2 >> 0xd & 1) == 0) {
                    if ((uVar2 >> 2 & 1) != 0) goto LAB_10832b3a8;
                    param_1 = 8;
                  }
                  else {
                    param_1 = 0x100;
                  }
                }
                else {
                  param_1 = 4;
                }
              }
              else {
                param_1 = 1;
              }
            }
          }
        }
      }
    }
  }
  else {
    if (iVar1 != 0x27) goto LAB_10832b3a8;
    param_1 = *(ulong *)(unaff_x19 + 8);
    param_2 = *(long *)(unaff_x20 + 0x18);
    FUN_108328360();
  }
  *(uint *)(unaff_x19 + 0x10) = *(uint *)(unaff_x19 + 0x10) | (uint)param_1;
LAB_10832b3a8:
  func_0x00010832c6e4();
  if (*(int *)(param_2 + 0xc) - 0x19U < 0x1a) {
    func_0x0001083c3950();
                    /* WARNING: Could not recover jumptable at 0x0001083c2754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df2096e)[extraout_x8] * 4 + 0x1083c2758))();
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1083c2868);
  (*pcVar3)();
}



/* Entry: 10832b41c; end: 10832b43b;  */

void FUN_10832b41c(long *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010832b428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,*param_2);
  return;
}



/* Entry: 10832b43c; end: 10832b53f;  */

void FUN_10832b43c(undefined4 *param_1,ulong param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lStack_48;
  
  uVar1 = param_1[1];
  iVar4 = (int)param_2;
  *param_1 = 0;
  param_1[1] = iVar4;
  plVar7 = (long *)(param_1 + 2);
  lStack_48 = *plVar7;
  *plVar7 = 0;
  uVar8 = (ulong)iVar4;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar8;
  uVar6 = ((-(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1) + (long)iVar4
          ) * 8;
  puVar3 = (undefined8 *)(uVar6 + 0x10);
  if (0xffffffffffffffef < uVar6 || SUB168(auVar2 * ZEXT816(0x18),8) != 0) {
    puVar3 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar3 = 0x18;
  puVar3[1] = uVar8;
  if (iVar4 != 0) {
    lVar5 = uVar8 * 0x18;
    puVar3 = puVar3 + 2;
    do {
      *(undefined4 *)puVar3 = 0;
      lVar5 = lVar5 + -0x18;
      puVar3 = puVar3 + 3;
    } while (lVar5 != 0);
  }
  FUN_10832b59c(plVar7);
  for (lVar5 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 0x18 - lVar5 != 0;
      lVar5 = lVar5 + 0x18) {
    if (*(int *)(lStack_48 + lVar5) != 0) {
      FUN_10832b5b4(param_1,lStack_48 + lVar5 + 8);
    }
  }
  FUN_10832b730(&lStack_48);
  return;
}



/* Entry: 10832b540; end: 10832b59b;  */

void FUN_10832b540(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar1 = param_1[1];
  uStack_30 = param_2;
  uStack_28 = param_3;
  if (iVar1 * 3 <= *param_1 * 4) {
    iVar2 = iVar1 << 1;
    if (iVar1 < 1) {
      iVar2 = 4;
    }
    FUN_10832b43c(param_1,iVar2);
  }
  FUN_10832b5b4(param_1,&uStack_30);
  return;
}



/* Entry: 10832b59c; end: 10832b5b3;  */

void FUN_10832b59c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) * 0x18;
      do {
        if (*(int *)(lVar1 + -0x18 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x18 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x18;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 10832b5b4; end: 10832b69b;  */

ulong * FUN_10832b5b4(int *param_1,ulong *param_2)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  
  puVar3 = param_2;
  FUN_10832b6d4();
  iVar5 = 0;
  iVar4 = param_1[1];
  uVar2 = (uint)puVar3;
  uVar6 = iVar4 - 1U & uVar2;
  while( true ) {
    if (iVar4 <= iVar5) {
      return (ulong *)0x0;
    }
    puVar7 = (uint *)(*(long *)(param_1 + 2) + (long)(int)uVar6 * 0x18);
    if (*puVar7 == 0) break;
    if (uVar2 == *puVar7) {
      uVar8 = *param_2;
      FUN_10821b208(uVar8,param_2[1],*(undefined8 *)(puVar7 + 2),*(undefined8 *)(puVar7 + 4));
      if ((uVar8 & 1) != 0) {
        if (*puVar7 != 0) {
          *puVar7 = 0;
        }
        uVar8 = *param_2;
        *(ulong *)(puVar7 + 4) = param_2[1];
        *(ulong *)(puVar7 + 2) = uVar8;
        *puVar7 = uVar2;
        return (ulong *)(puVar7 + 2);
      }
      iVar4 = param_1[1];
    }
    iVar1 = 0;
    if ((int)uVar6 < 1) {
      iVar1 = iVar4;
    }
    uVar6 = (uVar6 + iVar1) - 1;
    iVar5 = iVar5 + 1;
  }
  uVar8 = *param_2;
  *(ulong *)(puVar7 + 4) = param_2[1];
  *(ulong *)(puVar7 + 2) = uVar8;
  *puVar7 = uVar2;
  *param_1 = *param_1 + 1;
  return (ulong *)(puVar7 + 2);
}



/* Entry: 10832b69c; end: 10832b6d3;  */

void FUN_10832b69c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    if (*(long *)(param_2 + -8) != 0) {
      lVar1 = *(long *)(param_2 + -8) * 0x18;
      do {
        if (*(int *)(param_2 + -0x18 + lVar1) != 0) {
          *(undefined4 *)(param_2 + -0x18 + lVar1) = 0;
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(param_2 + -0x10);
    return;
  }
  return;
}



/* Entry: 10832b6d4; end: 10832b72f;  */

uint FUN_10832b6d4(uint param_1)

{
  func_0x00010832b6f0();
  if (param_1 < 2) {
    param_1 = 1;
  }
  return param_1;
}



/* Entry: 10832b730; end: 10832b753;  */

undefined8 FUN_10832b730(undefined8 param_1)

{
  FUN_10832b754(param_1,0);
  return param_1;
}



/* Entry: 10832b754; end: 10832b767;  */

void FUN_10832b754(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) * 0x18;
      do {
        if (*(int *)(lVar1 + -0x18 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x18 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x18;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 10832b768; end: 10832b807;  */

undefined8 * FUN_10832b768(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3c638;
  FUN_10832b8d4(param_1 + 0x2e);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x29);
  func_0x00010832b7e4(param_1 + 0x27);
  func_0x00010832b880(param_1 + 0x25);
  FUN_10831e0a4(param_1 + 0x1a);
  FUN_10831e0a4(param_1 + 0x12);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xf);
  func_0x00010831e250(param_1 + 0xc);
  FUN_10832b730(param_1 + 10);
  *param_1 = &PTR_DAT_110a3c978;
  return param_1;
}



/* Entry: 10832b808; end: 10832b84f;  */

void FUN_10832b808(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + -8);
  if (lVar1 != 0) {
    lVar2 = lVar1 * -0x20;
    lVar1 = param_1 + lVar1 * 0x20;
    do {
      lVar1 = lVar1 + -0x20;
      FUN_10832b850(lVar1);
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(param_1 + -0x10);
  return;
}



/* Entry: 10832b850; end: 10832b8a3;  */

void FUN_10832b850(int *param_1)

{
  if (*param_1 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 2);
    *param_1 = 0;
  }
  return;
}



/* Entry: 10832b8a4; end: 10832b8d3;  */

void FUN_10832b8a4(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + -8) != 0) {
    lVar1 = *(long *)(param_1 + -8) * 0x18;
    do {
      if (*(int *)(param_1 + -0x18 + lVar1) != 0) {
        *(undefined4 *)(param_1 + -0x18 + lVar1) = 0;
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(param_1 + -0x10);
  return;
}



/* Entry: 10832b8d4; end: 10832b93f;  */

long * FUN_10832b8d4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10831e0a4(lVar1 + 0x50);
    FUN_10831e0a4(lVar1 + 0x10);
    func_0x00010832b91c(lVar1 + 8);
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10832b940; end: 10832b98f;  */

void FUN_10832b940(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + -8);
  if (lVar1 != 0) {
    lVar2 = lVar1 * -0x28;
    lVar1 = param_1 + lVar1 * 0x28;
    do {
      lVar1 = lVar1 + -0x28;
      FUN_10832b990(lVar1);
      lVar2 = lVar2 + 0x28;
    } while (lVar2 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(param_1 + -0x10);
  return;
}



/* Entry: 10832b990; end: 10832b9bf;  */

void FUN_10832b990(int *param_1)

{
  if (*param_1 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 4);
    *param_1 = 0;
  }
  return;
}



/* Entry: 10832b9c0; end: 10832b9c7;  */

void FUN_10832b9c0(void)

{
  return;
}



/* Entry: 10832b9c8; end: 10832b9fb;  */

void FUN_10832b9c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x38;
  __Znwm();
  func_0x00010832cdf8(&PTR_FUN_110a3c9a0);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  return;
}



/* Entry: 10832b9fc; end: 10832ba2b;  */

void FUN_10832b9fc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_FUN_110a3c9a0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  param_2[6] = *(undefined8 *)(param_1 + 0x30);
  param_2[5] = uVar5;
  param_2[4] = uVar4;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10832ba2c; end: 10832bd63;  */

void FUN_10832ba2c(long param_1)

{
  uint uVar1;
  char cVar2;
  code *pcVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined *apuStack_90 [2];
  undefined1 uStack_79;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  ppuVar8 = apuStack_90;
  uVar11 = *(undefined8 *)(param_1 + 8);
  func_0x00010832c47c(param_1,&UNK_10f48d793);
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  lVar6 = *(long *)(param_1 + 0x10);
  if (*(char *)(*(long *)(lVar6 + 0x48) + 0x2c) != '\f') {
    func_0x00010832c814(apuStack_90);
    func_0x000107c27b9c(&uStack_78,apuStack_90);
    func_0x00010832c8fc();
    func_0x00010832c710(uStack_68._7_1_);
    func_0x00010832c604();
    func_0x00010832c9f0();
    func_0x00010832c400();
    lVar6 = *(long *)(param_1 + 0x10);
  }
  FUN_1083e425c(apuStack_90,lVar6);
  func_0x00010832c710(uStack_79);
  func_0x00010832c604();
  func_0x00010832c8fc();
  func_0x00010832c28c();
  func_0x00010832cc18();
  apuStack_90[0] = extraout_x8;
  FUN_108326c24(uVar11,*(undefined8 *)(param_1 + 0x10));
  puVar7 = apuStack_90[0];
  for (uVar13 = 0; (long)uVar13 < (long)*(int *)(*(long *)(param_1 + 0x20) + 0x18);
      uVar13 = uVar13 + 1) {
    _strlen();
    func_0x00010832c98c();
    FUN_108323b10();
    uVar10 = (*(long **)(param_1 + 0x28))[1];
    cVar4 = SBORROW8(uVar10,uVar13);
    cVar5 = (long)(uVar10 - uVar13) < 0;
    if (uVar10 <= uVar13) goto LAB_10832bd34;
    uVar1 = *(uint *)(*(long *)(**(long **)(param_1 + 0x28) + uVar13 * 8) + 0x30);
    if ((uVar1 >> 5 & 1) == 0) {
      func_0x00010832cdb0();
      if (cVar5 == cVar4) goto LAB_10832bd34;
      func_0x00010832c3a8();
    }
    else {
      if ((uVar1 >> 4 & 1) == 0) {
        func_0x00010832ca08();
        if (cVar5 == cVar4) goto LAB_10832bd34;
        func_0x00010832cd80();
        if ((long)puVar7 < 0) {
          puVar7 = *(undefined **)(extraout_x8_00 + 8);
        }
      }
      else {
        func_0x00010832c88c();
        func_0x00010832c60c();
        func_0x00010832ca08();
        if (cVar5 == cVar4) goto LAB_10832bd34;
        func_0x00010832cd80();
        func_0x00010832c604();
        func_0x00010832c928();
        func_0x00010832c678();
        func_0x00010832cdb0();
        if (cVar5 == cVar4) goto LAB_10832bd34;
        func_0x00010832c5a4();
        puVar7 = (undefined *)0x0;
      }
      func_0x00010832c604();
    }
    ppuVar8 = (undefined **)puVar7;
    puVar7 = &DAT_10f68f19e;
  }
  func_0x00010832c47c();
  lVar12 = 0;
  lVar6 = 0;
  do {
    lVar9 = (long)*(int *)(*(long *)(param_1 + 0x20) + 0x18);
    cVar4 = SBORROW8(lVar6,lVar9);
    cVar5 = lVar6 - lVar9 < 0;
    if (lVar9 <= lVar6) {
      uVar13 = uStack_70;
      if (-1 < (long)uStack_68) {
        uVar13 = uStack_68 >> 0x38;
      }
      if (uVar13 != 0) {
        func_0x00010832c468();
        func_0x00010832c604();
      }
      func_0x00010832c2d0();
      func_0x00010832cb50();
      return;
    }
    func_0x00010832ca08();
    if (cVar5 == cVar4) goto LAB_10832bd34;
    lVar9 = *(long *)(extraout_x8_01 + 0x180) + lVar12;
    cVar2 = *(char *)(lVar9 + 0x17);
    if (cVar2 < '\0') {
      if (*(long *)(lVar9 + 8) != 0) goto LAB_10832bc78;
    }
    else if (cVar2 != '\0') {
LAB_10832bc78:
      func_0x00010832c88c();
      func_0x00010832c678();
      func_0x00010832cdb0();
      if (cVar5 == cVar4) {
LAB_10832bd34:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10832bd38);
        (*pcVar3)();
      }
      func_0x00010832c5a4();
      func_0x00010832c928();
      func_0x00010832c678();
      func_0x00010832ca08();
      if (cVar5 == cVar4) goto LAB_10832bd34;
      func_0x00010832cd80();
      if ((long)ppuVar8 < 0) {
        ppuVar8 = *(undefined ***)(extraout_x8_02 + 8);
      }
      func_0x00010832c604();
      func_0x00010832c98c();
      func_0x00010832c60c();
    }
    lVar6 = lVar6 + 1;
    lVar12 = lVar12 + 0x18;
  } while( true );
}



/* Entry: 10832bd64; end: 10832bd8f;  */

void FUN_10832bd64(undefined8 param_1,undefined8 param_2)

{
  func_0x00010832ceb8(param_2,param_1,&PTR_DAT_110a3ca00);
  func_0x00010832cd60();
  return;
}



/* Entry: 10832bd90; end: 10832bd9b;  */

undefined ** FUN_10832bd90(void)

{
  return &PTR_DAT_110a3ca00;
}



/* Entry: 10832bd9c; end: 10832bdc3;  */

uint FUN_10832bd9c(undefined8 param_1)

{
  undefined8 uVar1;
  char in_NG;
  char in_OV;
  uint uVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x10;
  undefined8 extraout_x11;
  
  func_0x00010832c5d8();
  uVar1 = extraout_x11;
  uVar3 = extraout_x10;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
    uVar3 = param_1;
  }
  func_0x00010832cf18(uVar3,uVar1);
  uVar2 = (uint)uVar3;
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 10832bdc4; end: 10832be8b;  */

uint * FUN_10832bdc4(undefined8 param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int *unaff_x19;
  uint *unaff_x20;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x00010832c7d0();
  FUN_10832bd9c();
  iVar5 = 0;
  iVar4 = unaff_x19[1];
  uVar2 = (uint)param_2;
  uVar6 = iVar4 - 1U & uVar2;
  while( true ) {
    if (iVar4 <= iVar5) {
      return param_2;
    }
    puVar3 = (uint *)(*(long *)(unaff_x19 + 2) + (long)(int)uVar6 * 0x20);
    if (*puVar3 == 0) break;
    if (uVar2 == *puVar3) {
      param_2 = unaff_x20;
      func_0x000107c278d0();
      if (((ulong)param_2 & 1) != 0) {
        FUN_10832b850();
        uVar8 = *(undefined8 *)(unaff_x20 + 2);
        uVar7 = *(undefined8 *)unaff_x20;
        *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(unaff_x20 + 4);
        *(undefined8 *)(puVar3 + 4) = uVar8;
        *(undefined8 *)(puVar3 + 2) = uVar7;
        unaff_x20[0] = 0;
        unaff_x20[1] = 0;
        unaff_x20[2] = 0;
        unaff_x20[3] = 0;
        unaff_x20[4] = 0;
        unaff_x20[5] = 0;
        *puVar3 = uVar2;
        return puVar3;
      }
      iVar4 = unaff_x19[1];
    }
    iVar1 = 0;
    if ((int)uVar6 < 1) {
      iVar1 = iVar4;
    }
    uVar6 = (uVar6 + iVar1) - 1;
    iVar5 = iVar5 + 1;
  }
  FUN_10832be8c(puVar3);
  *unaff_x19 = *unaff_x19 + 1;
  return puVar3;
}



/* Entry: 10832be8c; end: 10832bed3;  */

undefined4 * FUN_10832be8c(undefined4 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_10832b850();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 6) = param_2[2];
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 2) = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_1 = param_3;
  return param_1;
}



/* Entry: 10832bed4; end: 10832bef3;  */

uint FUN_10832bed4(undefined8 param_1)

{
  uint uVar1;
  
  func_0x00010832cf18(param_1,8);
  uVar1 = (uint)param_1;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10832bef4; end: 10832bf83;  */

int * FUN_10832bef4(undefined8 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint extraout_w8;
  int extraout_w9;
  int extraout_w9_00;
  long lVar4;
  long extraout_x10;
  uint extraout_w11;
  undefined8 uVar5;
  undefined8 extraout_x12;
  int *unaff_x19;
  long *unaff_x20;
  long lVar6;
  
  func_0x00010832c7d0();
  FUN_10832bed4();
  piVar3 = param_2;
  func_0x00010832d078(unaff_x19[1]);
  lVar4 = *unaff_x20;
  uVar1 = extraout_w8 & ((int)extraout_w8 >> 0x1f ^ 0xffffffffU);
  uVar5 = 0x28;
  iVar2 = extraout_w9;
  while( true ) {
    if (uVar1 == 0) {
      return param_2;
    }
    param_2 = (int *)(*(long *)(unaff_x19 + 2) + (long)iVar2 * (long)(int)uVar5);
    if (*param_2 == 0) break;
    if (((int)piVar3 == *param_2) && (lVar4 == *(long *)(param_2 + 2))) {
      FUN_10832b990();
      *(long *)(param_2 + 2) = *unaff_x20;
      lVar6 = unaff_x20[2];
      lVar4 = unaff_x20[1];
      *(long *)(param_2 + 8) = unaff_x20[3];
      *(long *)(param_2 + 6) = lVar6;
      *(long *)(param_2 + 4) = lVar4;
      unaff_x20[2] = 0;
      unaff_x20[3] = 0;
      unaff_x20[1] = 0;
      *param_2 = (int)piVar3;
      return param_2;
    }
    func_0x00010832c864();
    lVar4 = extraout_x10;
    uVar5 = extraout_x12;
    iVar2 = extraout_w9_00;
    uVar1 = extraout_w11;
  }
  FUN_10832bf84();
  *unaff_x19 = *unaff_x19 + 1;
  return param_2;
}


